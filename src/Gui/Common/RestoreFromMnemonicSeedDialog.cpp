// Copyright (c) 2011-2016 The Cryptonote developers
// Copyright (c) 2015-2016 XDN developers
// Copyright (c) 2016-2017 The Karbowanec developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include <QApplication>
#include <QFileDialog>
#include "RestoreFromMnemonicSeedDialog.h"
#include "ui_RestoreFromMnemonicSeedDialog.h"

namespace WalletGui {

RestoreFromMnemonicSeedDialog::RestoreFromMnemonicSeedDialog(QWidget* _parent) : QDialog(_parent), m_ui(new Ui::RestoreFromMnemonicSeedDialog) {
  m_ui->setupUi(this);
}

RestoreFromMnemonicSeedDialog::~RestoreFromMnemonicSeedDialog() {
}

QString RestoreFromMnemonicSeedDialog::getSeedString() const {
  return m_ui->m_seedEdit->toPlainText().trimmed();
}

void RestoreFromMnemonicSeedDialog::onTextChanged() {
  wordCount = m_ui->m_seedEdit->toPlainText().split(QRegExp("(\\s|\\n|\\r)+")
                                                  , QString::SkipEmptyParts).count();
  if(wordCount != 25) {
    m_ui->m_okButton->setEnabled(false);
    m_ui->m_errorLabel->setText(QString::number(wordCount));
    m_ui->m_errorLabel->setStyleSheet("QLabel { color : red; }");
  }
  if(wordCount == 25) {
    m_ui->m_okButton->setEnabled(true);
    m_ui->m_errorLabel->setText("OK");
    m_ui->m_errorLabel->setStyleSheet("QLabel { color : green; }");
  }
}

}
