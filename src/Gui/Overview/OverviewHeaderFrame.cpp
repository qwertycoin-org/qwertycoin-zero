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

#include <QApplication>
#include <QClipboard>
#include <QDataWidgetMapper>
#include <QMetaMethod>
#include <QMovie>
#include <QtMath>
#include <QUrl>
#include <QDebug>

#include "OverviewHeaderFrame.h"
#include "Settings/Settings.h"
#include "OverviewHeaderGlassFrame.h"
#include "Gui/Common/LinkLikeColumnDelegate.h"
#include "Gui/Common/PoolTransactionDetailsDialog.h"
#include "ICryptoNoteAdapter.h"
#include "CryptoNoteWrapper/CommonNodeAdapter.h"
#include "CryptoNoteWrapper/CryptoNoteAdapter.h"
#include "Models/NodeStateModel.h"
#include "Models/TransactionPoolModel.h"
#include "Models/WalletStateModel.h"
#include "OverviewTransactionPoolModel.h"
#include "Style/Style.h"
#include "ui_OverviewHeaderFrame.h"

namespace WalletGui {

namespace {

const char OVERVIEW_HEADER_STYLE_SHEET_TEMPLATE[] =
  "* {"
    "font-family: %fontFamily%;"
  "}"

  "WalletGui--OverviewHeaderFrame {"
    "border: none;"
    "border-bottom: 1px solid %borderColor%;"
    "background-color: %backgroundColorGray%;"
    "min-height: 130px;"
    "max-height: 130px;"
  "}"

  "WalletGui--OverviewHeaderFrame #m_overviewBalanceFrame {"
    "border: none;"
    "border-right: 1px solid %borderColor%;"
  "}"


  "WalletGui--OverviewHeaderFrame #m_overviewTransactionPoolView {"
    "background: transparent;"
    "margin-top: -4px;"
  "}"

  "WalletGui--OverviewHeaderFrame #m_overviewTransactionPoolView::item {"
    "min-height: 19px;"
    "border-right: 10px solid transparent;"
    "border-bottom: 2px solid transparent;"
  "}"

  "WalletGui--OverviewHeaderFrame WalletGui--WalletHeaderLabel {"
    "margin-top: 2px;"
  "}"

  "WalletGui--OverviewHeaderFrame #m_overviewPoolSizeLabel {"
    "margin-top: 3px;"
  "}"

  "WalletGui--OverviewHeaderFrame #m_overviewConnectionState[connected=\"false\"] {"
    "color: %fontColorRed%;"
  "}"

  "WalletGui--OverviewHeaderFrame #m_overviewConnectionState[connected=\"true\"] {"
    "color: %fontColorGreen%;"
  "}";

}

OverviewHeaderFrame::OverviewHeaderFrame(QWidget* _parent) : QFrame(_parent), m_ui(new Ui::OverviewHeaderFrame),
  m_cryptoNoteAdapter(nullptr), m_nodeStateModel(nullptr),
  m_walletStateModel(nullptr), m_transactionPoolModel(nullptr), m_overViewTransactionPoolModel(nullptr),
  m_syncMovie(new QMovie(":icons/light/wallet-sync", QByteArray(), this)),
  m_balancesGlassFrame(new OverviewHeaderGlassFrame(m_syncMovie, nullptr)),
  m_transactionPoolGlassFrame(new OverviewHeaderGlassFrame(m_syncMovie, nullptr)) {
  m_ui->setupUi(this);
  setStyleSheet(Settings::instance().getCurrentStyle().makeStyleSheet(OVERVIEW_HEADER_STYLE_SHEET_TEMPLATE));
 // m_ui->m_overviewAvailableBalanceLabel->installEventFilter(this);
 // m_ui->m_overviewLockedBalanceLabel->installEventFilter(this);
 // m_ui->m_overviewTotalBalanceLabel->installEventFilter(this);
 // changeConnectionStateAppearance();
  m_ui->m_overviewNodeVersionTextLabel->setText("");
  m_ui->m_overviewNodeVersionLabel->setText("");
}

OverviewHeaderFrame::~OverviewHeaderFrame() {
}

bool OverviewHeaderFrame::eventFilter(QObject* _object, QEvent* _event) {
  if (_event ->type() == QEvent::MouseButtonRelease) {
    if (_object == m_ui->m_overviewAvailableBalanceLabel) {
      copyAvailableBalance();
    } else if (_object == m_ui->m_overviewLockedBalanceLabel) {
      copyLockedBalance();
    } else if (_object == m_ui->m_overviewTotalBalanceLabel) {
      copyTotalBalance();
    }
  }

  return QFrame::eventFilter(_object, _event);
}

void OverviewHeaderFrame::setCryptoNoteAdapter(ICryptoNoteAdapter* _cryptoNoteAdapter) {
  m_cryptoNoteAdapter = _cryptoNoteAdapter;
  m_ui->m_overviewAvailableBalanceTickerLabel->setText(m_cryptoNoteAdapter->getCurrencyTicker().toUpper());
  m_ui->m_overviewLockedBalanceTickerLabel->setText(m_cryptoNoteAdapter->getCurrencyTicker().toUpper());
  m_ui->m_overviewTotalBalanceTickerLabel->setText(m_cryptoNoteAdapter->getCurrencyTicker().toUpper());
  m_cryptoNoteAdapter->addObserver(this);

  m_ui->m_overviewMasternode->setText(QString("%1:%2").arg(m_cryptoNoteAdapter->getNodeAdapter()->getNodeHost()).arg(m_cryptoNoteAdapter->getNodeAdapter()->getNodePort()));
}

void OverviewHeaderFrame::setMainWindow(QWidget* _mainWindow) {
  m_mainWindow = _mainWindow;
}

void OverviewHeaderFrame::setNodeStateModel(QAbstractItemModel* _model) {
  m_nodeStateModel = _model;
  QDataWidgetMapper* stateMapper = new QDataWidgetMapper(this);
  stateMapper->setModel(m_nodeStateModel);
  //stateMapper->addMapping(m_ui->m_overviewNetworkHashrateLabel, NodeStateModel::COLUMN_NETWORK_HASHRATE, "text");
  //stateMapper->addMapping(m_ui->m_overviewNetworkDifficultyLabel, NodeStateModel::COLUMN_LAST_LOCAL_BLOCK_DIFFICULTY, "text");
  //stateMapper->addMapping(m_ui->m_overviewConnectionState, NodeStateModel::COLUMN_CONNECTION_STATE, "text");
  //stateMapper->addMapping(m_ui->m_overviewPeerCount, NodeStateModel::COLUMN_PEER_COUNT, "text");
  //stateMapper->addMapping(m_ui->m_overviewLocalHeight, NodeStateModel::COLUMN_LOCAL_BLOCK_COUNT, "text");
  //stateMapper->addMapping(m_ui->m_overviewBlockTimestamp, NodeStateModel::COLUMN_LAST_LOCAL_BLOCK_TIMESTAMP, "text");
  stateMapper->addMapping(m_ui->m_overviewConnectionState, NodeStateModel::COLUMN_CONNECTION_STATE, "text");
  stateMapper->setCurrentIndex(0);
  connect(m_nodeStateModel, &QAbstractItemModel::dataChanged, this, &OverviewHeaderFrame::m_nodeStateModelDataChanged);
  changeConnectionStateAppearance();
}

void OverviewHeaderFrame::setWalletStateModel(QAbstractItemModel* _model) {
  m_walletStateModel = _model;
  QDataWidgetMapper* stateMapper = new QDataWidgetMapper(this);
  stateMapper->setModel(m_walletStateModel);
  stateMapper->addMapping(m_ui->m_overviewAvailableBalanceLabel, WalletStateModel::COLUMN_ACTUAL_BALANCE, "text");
  stateMapper->addMapping(m_ui->m_overviewLockedBalanceLabel, WalletStateModel::COLUMN_PENDING_BALANCE, "text");
  stateMapper->addMapping(m_ui->m_overviewTotalBalanceLabel, WalletStateModel::COLUMN_TOTAL_BALANCE, "text");
  stateMapper->setCurrentIndex(0);
  connect(m_walletStateModel, &QAbstractItemModel::dataChanged, this, &OverviewHeaderFrame::walletStateModelDataChanged);
}

void OverviewHeaderFrame::setTransactionPoolModel(QAbstractItemModel* _model) {
/*  m_transactionPoolModel = _model;
  connect(m_transactionPoolModel, &QAbstractItemModel::modelReset, this, &OverviewHeaderFrame::transactionPoolChanged);
  m_overViewTransactionPoolModel = new OverviewTransactionPoolModel(m_cryptoNoteAdapter, this);
  m_overViewTransactionPoolModel->setSourceModel(m_transactionPoolModel);
  m_ui->m_overviewTransactionPoolView->setModel(m_overViewTransactionPoolModel);
  int hashColumn = TransactionPoolModel::findProxyColumn(m_overViewTransactionPoolModel, TransactionPoolModel::COLUMN_HASH);
  int amountColumn = TransactionPoolModel::findProxyColumn(m_overViewTransactionPoolModel, TransactionPoolModel::COLUMN_AMOUNT);
  m_ui->m_overviewTransactionPoolView->header()->setSectionResizeMode(hashColumn, QHeaderView::Stretch);
  m_ui->m_overviewTransactionPoolView->header()->setSectionResizeMode(amountColumn, QHeaderView::ResizeToContents);
  m_ui->m_overviewTransactionPoolView->setItemDelegateForColumn(hashColumn, new LinkLikeColumnDelegate(this));*/
}

void OverviewHeaderFrame::cryptoNoteAdapterInitCompleted(int _status) {
  // Do nothing
}

void OverviewHeaderFrame::cryptoNoteAdapterDeinitCompleted() {
  // Do nothing
}

void OverviewHeaderFrame::copyAvailableBalance() {
  QString balanceString = m_walletStateModel->index(0, WalletStateModel::COLUMN_TOTAL_BALANCE).data().toString();
  balanceString.remove(',');
  QApplication::clipboard()->setText(balanceString);
  m_ui->m_availableBalanceCopyLabel->start();
}

void OverviewHeaderFrame::copyLockedBalance() {
  QString balanceString = m_walletStateModel->index(0, WalletStateModel::COLUMN_PENDING_BALANCE).data().toString();
  balanceString.remove(',');
  QApplication::clipboard()->setText(balanceString);
  m_ui->m_lockedBalanceCopyLabel->start();
}

void OverviewHeaderFrame::copyTotalBalance() {
  QString balanceString = m_walletStateModel->index(0, WalletStateModel::COLUMN_TOTAL_BALANCE).data().toString();
  balanceString.remove(',');
  QApplication::clipboard()->setText(balanceString);
  m_ui->m_totalBalanceCopyLabel->start();
}

void OverviewHeaderFrame::transactionPoolChanged() {
  //m_ui->m_overviewPoolSizeLabel->setText(tr("%1 transactions").arg(m_transactionPoolModel->rowCount()));
}

void OverviewHeaderFrame::walletStateModelDataChanged(const QModelIndex& _topLeft, const QModelIndex& _bottomRight,
  const QVector<int>& _roles) {
  if (_topLeft.column() == WalletStateModel::COLUMN_ABOUT_TO_BE_SYNCHRONIZED) {
    bool walletAboutToBeSynchronized = _topLeft.data().toBool();
    if (!walletAboutToBeSynchronized) {
    //  m_balancesGlassFrame->install(m_ui->m_overviewBalanceFrame);
    //  m_transactionPoolGlassFrame->install(m_ui->m_overviewPoolFrame);
    //  m_syncMovie->start();
    } else {
    //  m_balancesGlassFrame->remove();
    //  m_transactionPoolGlassFrame->remove();
    //  m_syncMovie->stop();
    }
  }
}

void OverviewHeaderFrame::m_nodeStateModelDataChanged(const QModelIndex& _topLeft, const QModelIndex& _bottomRight,
  const QVector<int>& _roles) {

  QString host = m_nodeStateModel->index(0, NodeStateModel::COLUMN_NODE_HOST).data(NodeStateModel::ROLE_NODE_HOST).toString();
  QString port = m_nodeStateModel->index(0, NodeStateModel::COLUMN_NODE_PORT).data(NodeStateModel::ROLE_NODE_PORT).toString();
  m_ui->m_overviewMasternode->setText(QString("%1:%2").arg(host).arg(port));

  m_isConnected = m_nodeStateModel->index(0, NodeStateModel::COLUMN_CONNECTION_STATE).data(NodeStateModel::ROLE_CONNECTION_STATE).toBool();
  m_ui->m_overviewConnectionState->setText(m_isConnected ? "connected" : "disconnected");
  changeConnectionStateAppearance();

  CryptoNote::COMMAND_RPC_GET_INFO::response info;
  if (m_cryptoNoteAdapter->getNodeInfo(QUrl::fromUserInput(host + ":" + port), info)) {
    m_ui->m_overviewNodeVersionTextLabel->setText("Version");
    m_ui->m_overviewNodeVersionLabel->setText(QString::fromStdString(info.version));
  }

}

void OverviewHeaderFrame::changeConnectionStateAppearance() {
  if (m_ui->m_overviewConnectionState->text() == "connected") {
    m_ui->m_overviewConnectionState->setProperty("connected", true);
    m_ui->m_overviewConnectionState->setStyleSheet("QLabel {  }");
  } else if (m_ui->m_overviewConnectionState->text() == "disconnected") {
    m_ui->m_overviewConnectionState->setProperty("connected", false);
    m_ui->m_overviewConnectionState->setStyleSheet("QLabel {  }");
  }
  m_ui->m_overviewConnectionState->style()->unpolish(m_ui->m_overviewConnectionState);
  m_ui->m_overviewConnectionState->style()->polish(m_ui->m_overviewConnectionState);
}

void OverviewHeaderFrame::poolTransactionClicked(const QModelIndex& _index) {
  QModelIndex sourceIndex = m_overViewTransactionPoolModel->mapToSource(_index);
  if (!sourceIndex.isValid()) {
    return;
  }

  PoolTransactionDetailsDialog dlg(m_transactionPoolModel, sourceIndex, m_mainWindow);
  dlg.exec();
}

}
