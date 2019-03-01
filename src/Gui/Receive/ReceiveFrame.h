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

#pragma once

#include <QFrame>
#include "Application/IWalletUiItem.h"
#include "ICryptoNoteAdapter.h"

class QAbstractItemModel;

namespace Ui {
class ReceiveFrame;
}

namespace WalletGui {

class ReceiveFrame : public QFrame, public IWalletUiItem, public ICryptoNoteAdapterObserver {
  Q_OBJECT
  Q_DISABLE_COPY(ReceiveFrame)

public:
  explicit ReceiveFrame(QWidget* _parent);
  ~ReceiveFrame();

  // IWalletUiItem
  virtual void setCryptoNoteAdapter(ICryptoNoteAdapter* _cryptoNoteAdapter) override;
  virtual void setMainWindow(QWidget* _mainWindow) override;

  // ICryptoNoteAdapterObserver
  Q_SLOT virtual void cryptoNoteAdapterInitCompleted(int _status) override;
  Q_SLOT virtual void cryptoNoteAdapterDeinitCompleted() override;

  Q_SLOT void walletOpened(QString _address);
  Q_SLOT void walletClosed();

  QString m_address;
  QString m_request;

private:
  QScopedPointer<Ui::ReceiveFrame> m_ui;
  ICryptoNoteAdapter* m_cryptoNoteAdapter;
  QWidget* m_mainWindow;

  Q_SLOT void generatePaymentIdClicked();
  Q_SLOT void generateRequest();
  Q_SLOT void copyRequest();
  Q_SLOT void saveRequest();
  Q_SLOT void saveQrCode();
};

}
