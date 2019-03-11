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

#include "QRCodeDialog.h"
#include "Gui/Common/QRLabel.h"
#include "Models/WalletStateModel.h"

#include "ui_QRCodeDialog.h"

namespace WalletGui {

QRCodeDialog::QRCodeDialog(const QString& _title, const QString& _text, QWidget* _parent) : QDialog(_parent, static_cast<Qt::WindowFlags>(Qt::WindowCloseButtonHint)),
  m_ui(new Ui::QRCodeDialog) {
  m_ui->setupUi(this);
  setWindowTitle(_title);
  m_ui->m_qrCodeLabel->showQRCode(_text);
}

QRCodeDialog::~QRCodeDialog() {
}

}
