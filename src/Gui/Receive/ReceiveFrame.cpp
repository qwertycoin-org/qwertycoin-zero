// Copyright (c) 2016-2018, The Karbo developers
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

#include <QDataWidgetMapper>
#include <QApplication>
#include <QFileDialog>
#include <QTextStream>
#include <QClipboard>
#include <QBuffer>
#include <QUrl>
#include <Common/StringTools.h>
#include "Gui/Common/QRLabel.h"
#include "Settings/Settings.h"
#include "ReceiveFrame.h"
#include "ui_ReceiveFrame.h"

namespace WalletGui {

ReceiveFrame::ReceiveFrame(QWidget* _parent) : QFrame(_parent), m_ui(new Ui::ReceiveFrame),
  m_cryptoNoteAdapter(nullptr), m_mainWindow(nullptr) {
  m_ui->setupUi(this);
}

ReceiveFrame::~ReceiveFrame() {
}

void ReceiveFrame::setCryptoNoteAdapter(ICryptoNoteAdapter* _cryptoNoteAdapter) {
  m_cryptoNoteAdapter = _cryptoNoteAdapter;
  m_cryptoNoteAdapter->addObserver(this);
}

void ReceiveFrame::setMainWindow(QWidget* _mainWindow) {
  m_mainWindow = _mainWindow;
}

void ReceiveFrame::cryptoNoteAdapterInitCompleted(int _status) {
  if (_status == 0) {
      m_ui->m_amountRequestSpinBox->setSuffix(" " + m_cryptoNoteAdapter->getCurrencyTicker().toUpper());
      generateRequest();
  }
}

void ReceiveFrame::cryptoNoteAdapterDeinitCompleted() {
  // Do nothing
}

void ReceiveFrame::walletOpened(QString _address) {
  m_address = _address;
  m_ui->m_amountRequestSpinBox->setSuffix(" " + m_cryptoNoteAdapter->getCurrencyTicker().toUpper());
  generateRequest();
}

void ReceiveFrame::walletClosed() {
  m_address = "";
}

void ReceiveFrame::generateRequest() {
  m_request = "qwertycoin:" + m_address;
  if(m_cryptoNoteAdapter->parseAmount(m_ui->m_amountRequestSpinBox->cleanText()) != 0){
    m_request.append("?amount=" + m_ui->m_amountRequestSpinBox->cleanText());
  }

  if(m_cryptoNoteAdapter->parseAmount(m_ui->m_amountRequestSpinBox->cleanText()) != 0 && !m_ui->m_paymentIdRequestEdit->text().isEmpty()) {
    m_request.append("&payment_id=" + m_ui->m_paymentIdRequestEdit->text());
  } else if(!m_ui->m_paymentIdRequestEdit->text().isEmpty()) {
    m_request.append("?payment_id=" + m_ui->m_paymentIdRequestEdit->text());
  }

  if((m_cryptoNoteAdapter->parseAmount(m_ui->m_amountRequestSpinBox->cleanText()) != 0 || !m_ui->m_paymentIdRequestEdit->text().isEmpty()) && !m_ui->m_labelEdit->text().isEmpty()) {
    m_request.append("&label=" + QUrl::toPercentEncoding(m_ui->m_labelEdit->text()));
  } else if(!m_ui->m_labelEdit->text().isEmpty()){
    m_request.append("?label=" + QUrl::toPercentEncoding(m_ui->m_labelEdit->text()));
  }
  m_ui->m_requestTextEdit->setText(m_request);
  m_ui->m_qrCodeRequestLabel->showQRCode(m_request);
}

void ReceiveFrame::copyRequest() {
  QApplication::clipboard()->setText(m_request);
}

void ReceiveFrame::saveRequest() {
  QString file = QFileDialog::getSaveFileName(this, tr("Save as"), QDir::homePath(), "TXT (*.txt)");
  if (!file.isEmpty()) {
    QFile f(file);
    if (f.open(QIODevice::WriteOnly | QIODevice::Truncate)) {
      QTextStream outputStream(&f);
      outputStream << m_request;
      f.close();
    }
  }
}

void ReceiveFrame::saveQrCode() {
  QString fileName = QFileDialog::getSaveFileName(this, tr("Save QR Code"), QDir::homePath(), "PNG (*.png)");
  if (!fileName.isEmpty()) {
    QPixmap qrcode = QPixmap::grabWidget(m_ui->m_qrCodeRequestLabel);
    QFile f(fileName);
    if (f.open(QIODevice::WriteOnly | QIODevice::Truncate)) {
      QByteArray ba;
      QBuffer buffer(&ba);
      buffer.open(QIODevice::WriteOnly);
      qrcode.save(&buffer, "PNG");
      f.write(ba);
      f.close();
    }
  }
}

void ReceiveFrame::generatePaymentIdClicked() {
  Crypto::Hash payment_id;
  payment_id = Crypto::rand<Crypto::Hash>();
  m_ui->m_paymentIdRequestEdit->setText(QString::fromStdString(Common::podToHex(payment_id)));
}

}
