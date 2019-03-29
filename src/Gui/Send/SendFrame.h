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

#pragma once

#include <QStyle>
#include <QFrame>
#include <QScrollArea>

#include "Application/IWalletUiItem.h"
#include "IAddressBookManager.h"
#include "IApplicationEventHandler.h"
#include "Gui/AddressBook/AddressBookFrame.h"
#include "ICryptoNoteAdapter.h"
#include "IWalletAdapter.h"

namespace Ui {
class SendFrame;
}

namespace WalletGui {

class ICryptoNoteAdapter;
class SendGlassFrame;
class TransferFrame;
class AddressProvider;

class SendFrame : public QFrame, public IWalletUiItem, public IWalletAdapterObserver, public IApplicationEventHandlerObserver,
  public ICryptoNoteAdapterObserver {
  Q_OBJECT
  Q_DISABLE_COPY(SendFrame)

public:
  explicit SendFrame(QWidget* _parent);
  ~SendFrame();

  void addRecipient(const RecepientPair& _data);

  // IWalletUiItem
  virtual void setCryptoNoteAdapter(ICryptoNoteAdapter* _cryptoNoteAdapter) override;
  virtual void setApplicationEventHandler(IApplicationEventHandler *_applicationEventHandler) override;
  virtual void setAddressBookManager(IAddressBookManager* _addressBookManager) override;
  virtual void setDonationManager(IDonationManager* _donationManager) override;
  virtual void setMainWindow(QWidget* _mainWindow) override;
  virtual void setWalletStateModel(QAbstractItemModel* _model) override;
  virtual void setAddressBookModel(QAbstractItemModel* _model) override;

  // IWalletAdapterObserver
  Q_SLOT virtual void walletOpened() override;
  Q_SLOT virtual void walletOpenError(int _initStatus) override;
  Q_SLOT virtual void walletClosed() override;
  Q_SLOT virtual void passwordChanged() override;
  Q_SLOT virtual void synchronizationProgressUpdated(quint32 _current, quint32 _total) override;
  Q_SLOT virtual void synchronizationCompleted() override;
  Q_SLOT virtual void balanceUpdated(quint64 _actualBalance, quint64 _pendingBalance) override;
  Q_SLOT virtual void externalTransactionCreated(quintptr _transactionId, const FullTransactionInfo& _transaction) override;
  Q_SLOT virtual void transactionUpdated(quintptr _transactionId, const FullTransactionInfo& _transaction) override;

  // IApplicationEventHandlerObserver
  Q_SLOT virtual void urlReceived(const QUrl& _url) override;
  Q_SLOT virtual void screenLocked() override;
  Q_SLOT virtual void screenUnlocked() override;

  // ICryptoNoteAdapterObserver
  Q_SLOT virtual void cryptoNoteAdapterInitCompleted(int _status) override;
  Q_SLOT virtual void cryptoNoteAdapterDeinitCompleted() override;

private:
  QScopedPointer<Ui::SendFrame> m_ui;
  ICryptoNoteAdapter* m_cryptoNoteAdapter;
  IDonationManager* m_donationManager;
  IAddressBookManager* m_addressBookManager;
  IApplicationEventHandler* m_applicationEventHandler;
  QWidget* m_mainWindow;
  QList<TransferFrame*> m_transfers;
  SendGlassFrame* m_glassFrame;
  QAbstractItemModel* m_walletStateModel;
  QAbstractItemModel* m_addressBookModel;
  AddressProvider* m_addressProvider;

  QString remote_node_fee_address;
  quint64 remote_node_fee;
  quint64 total_amount;
  bool on_remote = false;

  void processTranactionSendStatus(IWalletAdapter::SendTransactionStatus _status);
  void setPaymentIdError(bool _error);
  void setMixinError(bool _error);
  void updateSliderStyleSheet();
  void amountStringChanged(const QString& _amountString);
  void addressChanged(const QString& _address);
  void onAddressFound(const QString& _address);
  bool readyToSend() const;

  Q_SLOT void addRecipientClicked();
  Q_SLOT void clearAll();
  Q_SLOT void sendClicked();
  Q_SLOT void mixinValueChanged(int _value);
  Q_SLOT void priorityValueChanged(int _value);
  Q_SLOT void validatePaymentId(const QString& _paymentId);
  Q_SLOT void generatePaymentIdClicked();
  Q_SLOT void insertPaymentIdReceived(const QString& _paymentId);
  Q_SLOT void enableManualFee(bool _enable);
  Q_SLOT void sendAllClicked();

Q_SIGNALS:
  void showTransactionsFrameSignal();
};

}
