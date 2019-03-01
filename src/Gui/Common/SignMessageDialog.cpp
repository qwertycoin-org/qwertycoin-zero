// Copyright (c) 2016 The Karbowanec developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include "SignMessageDialog.h"
#include "ui_SignMessageDialog.h"

#include <QClipboard>
#include <QFileDialog>
#include <QTextStream>
#include <QTabWidget>

#include "Common/Base58.h"
#include "Common/StringTools.h"

#include <CryptoNoteConfig.h>
#include <CryptoNoteCore/CryptoNoteBasicImpl.h>
#include <boost/utility/value_init.hpp>
#include "crypto/crypto.h"

namespace WalletGui {

SignMessageDialog::SignMessageDialog(const AccountKeys& _keys, const QString& _address, QWidget* _parent) : QDialog(_parent, static_cast<Qt::WindowFlags>(Qt::WindowCloseButtonHint)), m_ui(new Ui::SignMessageDialog), m_keys(_keys), m_address(_address) {
  m_ui->setupUi(this);
  m_ui->m_verificationResult->setText("");
}

SignMessageDialog::~SignMessageDialog() {
}

void SignMessageDialog::sign() {
  m_ui->m_tabWidget->setCurrentIndex(0);
  changeTitle(0);
}

void SignMessageDialog::verify() {
  m_ui->m_tabWidget->setCurrentIndex(1);
  changeTitle(1);
}

void SignMessageDialog::changeTitle(int _variant) {
  this->setWindowTitle(_variant == 0 ? tr("Sign message") : tr("Verify signed message"));
}

void SignMessageDialog::messageChanged() {
  if (m_ui->m_tabWidget->currentIndex() != 0) { return; }
  std::string message = m_ui->m_messageEdit->toPlainText().toUtf8().constData();
  Crypto::Hash hash;
  Crypto::cn_fast_hash(message.data(), message.size(), hash);
  Crypto::Signature signature;
  Crypto::generate_signature(hash, m_keys.spendKeys.publicKey, m_keys.spendKeys.secretKey, signature);
  QString _signature = QString::fromStdString(std::string("SigV1") + Tools::Base58::encode(std::string((const char *)&signature, sizeof(signature))));
  m_ui->m_signatureEdit->setText(_signature);
}

void SignMessageDialog::verifyMessage() {
  m_ui->m_verificationResult->setText("");
  CryptoNote::AccountPublicAddress acc = boost::value_initialized<CryptoNote::AccountPublicAddress>();
  std::string addr_str = m_ui->m_addressEdit->text().trimmed().toStdString();
  std::string message = m_ui->m_verifyMessageEdit->toPlainText().toUtf8().constData();
  std::string signature = m_ui->m_verifySignatureEdit->toPlainText().toStdString();
  if(addr_str.empty() || message.empty() || signature.empty())
    return;
  uint64_t prefix;
  if(CryptoNote::parseAccountAddressString(prefix, acc, addr_str) && prefix == CryptoNote::parameters::CRYPTONOTE_PUBLIC_ADDRESS_BASE58_PREFIX) {
    Crypto::Hash hash;
    Crypto::cn_fast_hash(message.data(), message.size(), hash);
    const size_t header_len = strlen("SigV1");
    std::string decoded;
    Crypto::Signature s;
    if (!signature.size() < header_len && signature.substr(0, header_len) == "SigV1" &&
      Tools::Base58::decode(signature.substr(header_len), decoded) && sizeof(s) == decoded.size()) {
      memcpy(&s, decoded.data(), sizeof(s));
      if (Crypto::check_signature(hash, acc.spendPublicKey, s)) {
        m_ui->m_verificationResult->setText(tr("Signature is valid"));
        m_ui->m_verificationResult->setStyleSheet("QLabel { color : green; }");
      } else {
        m_ui->m_verificationResult->setText(tr("Signature is invalid!"));
        m_ui->m_verificationResult->setStyleSheet("QLabel { color : red; }");
      }
    } else {
      m_ui->m_verificationResult->setText(tr("Signature is invalid!"));
      m_ui->m_verificationResult->setStyleSheet("QLabel { color : red; }");
    }
  } else {
    m_ui->m_verificationResult->setText(tr("Address is invalid!"));
    m_ui->m_verificationResult->setStyleSheet("QLabel { color : red; }");
  }
}

}
