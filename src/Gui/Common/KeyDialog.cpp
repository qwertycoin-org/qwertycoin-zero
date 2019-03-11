// Copyright (c) 2015-2017, The Bytecoin developers
// Copyright (c) 2017-2018, The Karbo developers
// Copyright (c) 2019, The Qwertycoin developers
//
// This file is part of Qwertycoin.
//
// Qwertycoin is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// Qwertycoin is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with Qwertycoin.  If not, see <http://www.gnu.org/licenses/>.

#include <QFileDialog>
#include <QMessageBox>
#include <Common/Base58.h>
#include <Common/StringTools.h>

#include "KeyDialog.h"
#include "IWalletAdapter.h"
#include "Settings/Settings.h"
#include "Style/Style.h"
#include "ui_KeyDialog.h"

namespace WalletGui {

namespace {

const char KEY_DIALOG_STYLE_SHEET_TEMPLATE[] =
  "* {"
    "font-family: %fontFamily%;"
  "}"

  "WalletGui--KeyDialog #m_keyEdit {"
    "font-size: %fontSizeNormal%;"
    "border-radius: 2px;"
    "border: 1px solid %borderColorDark%;"
  "}";

AccountKeys convertByteArrayToAccountKeys(const QByteArray& _array) {
  AccountKeys accountKeys;
  QDataStream KeysDataStream(_array);
  KeysDataStream.readRawData(reinterpret_cast<char*>(&accountKeys.spendKeys.publicKey), sizeof(Crypto::PublicKey));
  KeysDataStream.readRawData(reinterpret_cast<char*>(&accountKeys.viewKeys.publicKey), sizeof(Crypto::PublicKey));
  KeysDataStream.readRawData(reinterpret_cast<char*>(&accountKeys.spendKeys.secretKey), sizeof(Crypto::SecretKey));
  KeysDataStream.readRawData(reinterpret_cast<char*>(&accountKeys.viewKeys.secretKey), sizeof(Crypto::SecretKey));
  return accountKeys;
}

bool isTrackingKeys(const QByteArray& _array) {
  if (_array.size() < sizeof(AccountKeys)) {
    return false;
  }

  AccountKeys accountKeys = convertByteArrayToAccountKeys(_array);
  return (std::memcmp(&accountKeys.spendKeys.secretKey, &CryptoNote::NULL_SECRET_KEY, sizeof(Crypto::SecretKey)) == 0);
}

}

KeyDialog::KeyDialog(const QByteArray& _key, bool _isTracking, QWidget *_parent)
  : QDialog(_parent, static_cast<Qt::WindowFlags>(Qt::WindowCloseButtonHint))
  , m_ui(new Ui::KeyDialog)
  , m_isTracking(_isTracking)
  , m_isExport(true)
  , m_key(_key) {
  m_ui->setupUi(this);

  m_ui->m_fileButton->setText(tr("Save to file"));
  m_ui->m_okButton->setText(tr("Close"));
  m_ui->m_keyEdit->setReadOnly(true);
  m_ui->m_viewKeyLineEdit->setReadOnly(true);
  m_ui->m_spendKeyLineEdit->setReadOnly(true);

  AccountKeys accountKeys;
  QDataStream keysDataStream(_key);
  keysDataStream.readRawData(reinterpret_cast<char*>(&accountKeys.spendKeys.publicKey), sizeof(Crypto::PublicKey));
  keysDataStream.readRawData(reinterpret_cast<char*>(&accountKeys.viewKeys.publicKey), sizeof(Crypto::PublicKey));
  keysDataStream.readRawData(reinterpret_cast<char*>(&accountKeys.spendKeys.secretKey), sizeof(Crypto::SecretKey));
  keysDataStream.readRawData(reinterpret_cast<char*>(&accountKeys.viewKeys.secretKey), sizeof(Crypto::SecretKey));

  m_ui->m_viewKeyLineEdit->setText(QString::fromStdString(Common::podToHex(accountKeys.viewKeys.secretKey)));

  if (m_isTracking) {
    m_ui->m_keyEdit->setPlainText(m_key.toHex().toUpper());
    m_ui->m_descriptionLabel->setText(tr("Tracking key allows other people to see all incoming transactions of this wallet.\n"
      "It doesn't allow spending your funds."));

   m_ui->m_spendKeyLabel->setVisible(false);
   m_ui->m_spendKeyLineEdit->setVisible(false);

  } else {
    QString privateKeys = QString::fromStdString(Tools::Base58::encode_addr(Settings::instance().getAddressPrefix(),
            std::string(m_key.constData(), m_key.length())));
    m_ui->m_keyEdit->setPlainText(privateKeys);

    m_ui->m_spendKeyLineEdit->setText(QString::fromStdString(Common::podToHex(accountKeys.spendKeys.secretKey)));
  }

  setWindowTitle(m_isTracking ? tr("Export tracking key") : tr("Export key"));
  m_ui->m_cancelButton->hide();
  setFixedHeight(250);
  setStyleSheet(Settings::instance().getCurrentStyle().makeStyleSheet(KEY_DIALOG_STYLE_SHEET_TEMPLATE));
}

KeyDialog::KeyDialog(QWidget* _parent)
  : QDialog(_parent, static_cast<Qt::WindowFlags>(Qt::WindowCloseButtonHint))
  , m_ui(new Ui::KeyDialog)
  , m_isTracking(false)
  , m_isExport(false) {
  m_ui->setupUi(this);
  setWindowTitle(m_isTracking ? tr("Import tracking key") : tr("Import key"));
  m_ui->m_fileButton->setText(tr("Load from file"));
  if (m_isTracking) {
    m_ui->m_descriptionLabel->setText(tr("Import a tracking key of a wallet to see all its incoming transactions.\n"
      "It doesn't allow spending funds."));
  }

  setFixedHeight(250);
}

KeyDialog::~KeyDialog() {
}

QByteArray KeyDialog::getKey() const {
  return QByteArray::fromHex(m_ui->m_keyEdit->toPlainText().toLatin1());
}

QString KeyDialog::getKeyString() const {
  return m_keys;
}

void KeyDialog::saveKey() {
  QString filePath = QFileDialog::getSaveFileName(this, m_isTracking ? tr("Save tracking key to...") : tr("Save key to..."),
#ifdef Q_OS_WIN
    QApplication::applicationDirPath(),
#else
    QDir::homePath(),
#endif
    m_isTracking ? tr("Tracking key (*.trackingkey)") : tr("Wallet key (*.walletkey)"));
  if (filePath.isEmpty()) {
    return;
  }

  if (m_isTracking && !filePath.endsWith(".trackingkey")) {
    filePath.append(".trackingkey");
  } else if (!m_isTracking && !filePath.endsWith(".walletkey")) {
    filePath.append(".walletkey");
  }

  QFile keyFile(filePath);
  if (!keyFile.open(QIODevice::WriteOnly | QIODevice::Truncate)) {
    return;
  }

  keyFile.write(m_key);
  keyFile.close();
}

void KeyDialog::loadKey() {
  QString filePath = QFileDialog::getOpenFileName(this, m_isTracking ? tr("Load tracking key from...") : tr("Load key from..."),
#ifdef Q_OS_WIN
    QApplication::applicationDirPath(),
#else
    QDir::homePath(),
#endif
    m_isTracking ? tr("Tracking key (*.trackingkey)") : tr("Wallet key (*.walletkey)"));
  if (filePath.isEmpty()) {
    return;
  }

  QFile keyFile(filePath);
  if (!keyFile.open(QIODevice::ReadOnly)) {
    return;
  }

  m_key = keyFile.readAll();
  keyFile.close();
  m_ui->m_keyEdit->setPlainText(m_key.toHex().toUpper());
}

void KeyDialog::fileClicked() {
  if (m_isExport) {
    saveKey();
    accept();
  } else {
    loadKey();
  }
}

void KeyDialog::keyChanged() {
  m_ui->m_viewKeyLineEdit->clear();
  m_ui->m_spendKeyLineEdit->clear();
  m_keys.clear();
  uint64_t addressPrefix;
  std::string data;
  AccountKeys accountKeys;
  QString keyString = m_ui->m_keyEdit->toPlainText().toLatin1().trimmed();
  if (Tools::Base58::decode_addr(keyString.toStdString(), addressPrefix, data) && addressPrefix == Settings::instance().getAddressPrefix() && data.size() == sizeof(accountKeys)) {
    accountKeys = convertByteArrayToAccountKeys(QByteArray::fromStdString(data));
    m_ui->m_viewKeyLineEdit->setText(QString::fromStdString(Common::podToHex(accountKeys.viewKeys.secretKey)));
    m_ui->m_spendKeyLineEdit->setText(QString::fromStdString(Common::podToHex(accountKeys.spendKeys.secretKey)));
    m_keys = keyString;
  } else {
    QByteArray _array = getKey();
    if (_array.size() < sizeof(AccountKeys)) {
      return;
    }
    accountKeys = convertByteArrayToAccountKeys(_array);
  }

  m_isTracking = (std::memcmp(&accountKeys.spendKeys.secretKey, &CryptoNote::NULL_SECRET_KEY, sizeof(Crypto::SecretKey)) == 0);

  setWindowTitle(m_isTracking ? tr("Import tracking key") : tr("Import key"));
  if (m_isTracking) {
    m_ui->m_viewKeyLineEdit->setText(QString::fromStdString(Common::podToHex(accountKeys.viewKeys.secretKey)));
    m_ui->m_descriptionLabel->setText(tr("Import a tracking key of a wallet to see all its incoming transactions.\n"
      "It doesn't allow spending funds."));
  } else {
    m_ui->m_descriptionLabel->clear();
  }
}

void KeyDialog::keysChanged() {
  std::string private_spend_key_string = m_ui->m_spendKeyLineEdit->text().toLatin1().trimmed().toStdString();
  std::string private_view_key_string = m_ui->m_viewKeyLineEdit->text().toLatin1().trimmed().toStdString();
  if (!private_spend_key_string.empty() && !private_view_key_string.empty()) {
    m_ui->m_keyEdit->clear();
    m_keys.clear();
    Crypto::Hash private_spend_key_hash;
    Crypto::Hash private_view_key_hash;
    size_t size1, size2;
    if((Common::fromHex(private_spend_key_string, &private_spend_key_hash, sizeof(private_spend_key_hash), size1)
            || size1 == sizeof(private_spend_key_hash)) &&
            (Common::fromHex(private_view_key_string, &private_view_key_hash, sizeof(private_view_key_hash), size2)
            || size2 == sizeof(private_view_key_hash))) {
      CryptoNote::AccountKeys keys;
      keys.spendSecretKey = *(struct Crypto::SecretKey *) &private_spend_key_hash;
      keys.viewSecretKey = *(struct Crypto::SecretKey *) &private_view_key_hash;
      Crypto::secret_key_to_public_key(keys.spendSecretKey, keys.address.spendPublicKey);
      Crypto::secret_key_to_public_key( keys.viewSecretKey, keys.address.viewPublicKey);
      m_keys = QString::fromStdString(Tools::Base58::encode_addr(Settings::instance().getAddressPrefix(),
        std::string(reinterpret_cast<char*>(&keys), sizeof(keys))));
      m_ui->m_keyEdit->setText(m_keys);
    }
  }
}

}
