// Copyright (c) 2018 The Karbowanec developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include "BalanceProofDialog.h"
#include "CryptoNoteWrapper/WalletGreenAdapter.h"

#include <QApplication>
#include <QClipboard>
#include <QFileDialog>
#include <QBuffer>
#include <QTextStream>

#include "Common/Base58.h"
#include "Common/StringTools.h"
#include "Settings/Settings.h"
#include "Style/Style.h"
#include "Models/WalletStateModel.h"

#include "ui_BalanceProofDialog.h"

namespace WalletGui {

BalanceProofDialog::BalanceProofDialog(ICryptoNoteAdapter* _cryptoNoteAdapter, QWidget* _parent) :
    QDialog(_parent, static_cast<Qt::WindowFlags>(Qt::WindowCloseButtonHint)),
    m_ui(new Ui::BalanceProofDialog), m_cryptoNoteAdapter(_cryptoNoteAdapter) {
  m_ui->setupUi(this);

  m_walletStateModel = new WalletStateModel(m_cryptoNoteAdapter, this);
  connect(m_walletStateModel, SIGNAL(balanceUpdatedSignal(quint64, quint64)), this, SLOT(balanceUpdated(quint64, quint64)));
  m_amount = m_cryptoNoteAdapter->getNodeAdapter()->getWalletAdapter()->getActualBalance();
  m_ui->m_amountSpin->setSuffix(" " + m_cryptoNoteAdapter->getCurrencyTicker().toUpper());
  m_ui->m_amountSpin->setValue(m_cryptoNoteAdapter->formatAmount(m_amount).toDouble());
  setStyleSheet(Settings::instance().getCurrentStyle().makeStyleSheet(BALANCE_PROOF_DIALOG_STYLE_SHEET_TEMPLATE));
  genProof();
}

BalanceProofDialog::~BalanceProofDialog() {
}

void BalanceProofDialog::walletBalanceUpdated(quint64 _actualBalance, quint64 _pendingBalance) {
  if (this->isVisible()) {
    m_ui->m_amountSpin->setValue(m_cryptoNoteAdapter->formatAmount(_actualBalance).toDouble());
  }
}

void BalanceProofDialog::genProof() {
  m_message = m_ui->m_messageEdit->toPlainText().toUtf8().constData();
  m_amount = static_cast<quint64>(m_cryptoNoteAdapter->parseAmount(m_ui->m_amountSpin->cleanText()));
  quint64 balance = m_cryptoNoteAdapter->getNodeAdapter()->getWalletAdapter()->getActualBalance();
  if (balance != 0 && (m_amount > balance || m_amount == 0)) {
      m_amount = balance;
  }
  if (m_amount > 0) {
    m_ui->m_amountSpin->setValue(m_cryptoNoteAdapter->formatAmount(m_amount).toDouble());
    m_proof = m_cryptoNoteAdapter->getNodeAdapter()->getWalletAdapter()->getBalanceProof(m_amount, m_message);
    m_ui->m_signatureEdit->setText(m_proof);
  } else {
    m_ui->m_amountSpin->setValue(0);
    m_ui->m_signatureEdit->setText("");
  }
}

void BalanceProofDialog::copyProof() {
  QApplication::clipboard()->setText(m_proof);
}

void BalanceProofDialog::saveProof() {
  QString filePath = QFileDialog::getSaveFileName(this, tr("Save as"), QDir::homePath(), "TXT (*.txt)");
  if (!filePath.isEmpty()) {
  QFile f(filePath);
    if (f.open(QIODevice::WriteOnly | QIODevice::Truncate)) {
      QTextStream outputStream(&f);
      outputStream << m_proof;
      f.close();
    }
  }
}

void BalanceProofDialog::balanceUpdated(quint64 _actualBalance, quint64 _pendingBalance) {
  if (_actualBalance == 0) {
     m_amount = 0;
  }
  genProof();
}

}
