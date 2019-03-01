/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Gui/AddressBook/AddressBookFrame.h"
#include "Gui/Common/CopyMagicLabel.h"
#include "Gui/Common/WalletLinkLikeButton.h"
#include "Gui/Common/WalletTextLabel.h"
#include "Gui/MainWindow/WalletStatusBar.h"
#include "Gui/NoWallet/NoWalletFrame.h"
#include "Gui/Overview/OverviewFrame.h"
#include "Gui/Receive/ReceiveFrame.h"
#include "Gui/Send/SendFrame.h"
#include "Gui/Transactions/TransactionsFrame.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *m_exitAction;
    QAction *m_createWalletAction;
    QAction *m_openWalletAction;
    QAction *m_encryptWalletAction;
    QAction *m_changePasswordAction;
    QAction *m_aboutQwertycoinAction;
    QAction *m_aboutQtAction;
    QAction *m_backupWalletAction;
    QAction *m_autostartAction;
    QAction *m_minimizeToTrayAction;
    QAction *m_closeToTrayAction;
    QAction *m_preferencesAction;
    QAction *m_recentWalletsAction;
    QAction *m_exportTrackingKeyAction;
    QAction *m_importKeyAction;
    QAction *m_communityForumAction;
    QAction *m_reportIssueAction;
    QAction *m_resetAction;
    QAction *m_saveKeysAction;
    QAction *m_exportKeyAction;
    QAction *m_closeWalletAction;
    QAction *m_showSeedAction;
    QAction *m_importSeedAction;
    QAction *m_createNondeterministicWalletAction;
    QAction *m_openPaymentRequestAction;
    QAction *m_createPaymentRequestAction;
    QAction *m_manualFeeAction;
    QAction *m_signMessageAction;
    QAction *m_verifyMessageAction;
    QAction *m_getBalanceProofAction;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QFrame *m_headerFrame;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_5;
    WalletGui::WalletSmallGrayTextLabel *m_noWalletLabel;
    QFrame *m_walletFrame;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer_3;
    QLabel *m_walletLabel;
    QLabel *m_addressLabel;
    QHBoxLayout *horizontalLayout_2;
    QFrame *m_notEncryptedFrame;
    QHBoxLayout *horizontalLayout_4;
    QLabel *m_notEncryptedIconLabel;
    QSpacerItem *horizontalSpacer_11;
    WalletGui::WalletTinyGrayTextLabel *m_notEncryptedTextLabel;
    QSpacerItem *horizontalSpacer_9;
    WalletGui::WalletTinyLinkLikeButton *m_encryptButton;
    QSpacerItem *horizontalSpacer_4;
    WalletGui::WalletTinyLinkLikeButton *m_showQrCodeButton;
    QSpacerItem *horizontalSpacer_10;
    WalletGui::WalletTinyLinkLikeButton *m_copyAddressButton;
    QSpacerItem *horizontalSpacer_7;
    WalletGui::CopyMagicLabel *m_copyAddressLabel;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_8;
    QFrame *m_balanceFrame;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_4;
    QLabel *m_balanceTextLabel;
    QLabel *m_balanceLabel;
    WalletGui::CopyMagicLabel *m_balanceCopyLabel;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *verticalSpacer_5;
    QLabel *m_balanceIconLabel;
    QHBoxLayout *horizontalLayout;
    QFrame *m_toolFrame;
    QVBoxLayout *verticalLayout;
    QPushButton *m_overviewButton;
    QPushButton *m_sendButton;
    QPushButton *m_receiveButton;
    QPushButton *m_transactionsButton;
    QPushButton *m_addressBookButton;
    QSpacerItem *verticalSpacer;
    WalletGui::OverviewFrame *m_overviewFrame;
    WalletGui::SendFrame *m_sendFrame;
    WalletGui::TransactionsFrame *m_transactionsFrame;
    WalletGui::AddressBookFrame *m_addressBookFrame;
    WalletGui::NoWalletFrame *m_noWalletFrame;
    WalletGui::ReceiveFrame *m_receiveFrame;
    QProgressBar *m_syncProgress;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuSettings;
    QMenu *menuThemes;
    QMenu *menuHelp;
    QMenu *menuPayment;
    QMenu *menuWallet;
    WalletGui::WalletStatusBar *statusBar;
    QButtonGroup *m_toolButtonGroup;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1060, 640);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(1060, 600));
        MainWindow->setMaximumSize(QSize(16777215, 16777215));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/Qwertycoin"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        m_exitAction = new QAction(MainWindow);
        m_exitAction->setObjectName(QStringLiteral("m_exitAction"));
        m_exitAction->setCheckable(false);
        m_exitAction->setEnabled(true);
        m_createWalletAction = new QAction(MainWindow);
        m_createWalletAction->setObjectName(QStringLiteral("m_createWalletAction"));
        m_createWalletAction->setEnabled(true);
        m_openWalletAction = new QAction(MainWindow);
        m_openWalletAction->setObjectName(QStringLiteral("m_openWalletAction"));
        m_openWalletAction->setEnabled(true);
        m_encryptWalletAction = new QAction(MainWindow);
        m_encryptWalletAction->setObjectName(QStringLiteral("m_encryptWalletAction"));
        m_encryptWalletAction->setEnabled(true);
        m_changePasswordAction = new QAction(MainWindow);
        m_changePasswordAction->setObjectName(QStringLiteral("m_changePasswordAction"));
        m_changePasswordAction->setEnabled(true);
        m_aboutQwertycoinAction = new QAction(MainWindow);
        m_aboutQwertycoinAction->setObjectName(QStringLiteral("m_aboutQwertycoinAction"));
        m_aboutQwertycoinAction->setEnabled(true);
        m_aboutQtAction = new QAction(MainWindow);
        m_aboutQtAction->setObjectName(QStringLiteral("m_aboutQtAction"));
        m_aboutQtAction->setEnabled(true);
        m_backupWalletAction = new QAction(MainWindow);
        m_backupWalletAction->setObjectName(QStringLiteral("m_backupWalletAction"));
        m_backupWalletAction->setEnabled(true);
        m_autostartAction = new QAction(MainWindow);
        m_autostartAction->setObjectName(QStringLiteral("m_autostartAction"));
        m_autostartAction->setCheckable(true);
        m_minimizeToTrayAction = new QAction(MainWindow);
        m_minimizeToTrayAction->setObjectName(QStringLiteral("m_minimizeToTrayAction"));
        m_minimizeToTrayAction->setCheckable(true);
        m_closeToTrayAction = new QAction(MainWindow);
        m_closeToTrayAction->setObjectName(QStringLiteral("m_closeToTrayAction"));
        m_closeToTrayAction->setCheckable(true);
        m_preferencesAction = new QAction(MainWindow);
        m_preferencesAction->setObjectName(QStringLiteral("m_preferencesAction"));
        m_recentWalletsAction = new QAction(MainWindow);
        m_recentWalletsAction->setObjectName(QStringLiteral("m_recentWalletsAction"));
        m_exportTrackingKeyAction = new QAction(MainWindow);
        m_exportTrackingKeyAction->setObjectName(QStringLiteral("m_exportTrackingKeyAction"));
        m_importKeyAction = new QAction(MainWindow);
        m_importKeyAction->setObjectName(QStringLiteral("m_importKeyAction"));
        m_communityForumAction = new QAction(MainWindow);
        m_communityForumAction->setObjectName(QStringLiteral("m_communityForumAction"));
        m_reportIssueAction = new QAction(MainWindow);
        m_reportIssueAction->setObjectName(QStringLiteral("m_reportIssueAction"));
        m_resetAction = new QAction(MainWindow);
        m_resetAction->setObjectName(QStringLiteral("m_resetAction"));
        m_saveKeysAction = new QAction(MainWindow);
        m_saveKeysAction->setObjectName(QStringLiteral("m_saveKeysAction"));
        m_exportKeyAction = new QAction(MainWindow);
        m_exportKeyAction->setObjectName(QStringLiteral("m_exportKeyAction"));
        m_closeWalletAction = new QAction(MainWindow);
        m_closeWalletAction->setObjectName(QStringLiteral("m_closeWalletAction"));
        m_showSeedAction = new QAction(MainWindow);
        m_showSeedAction->setObjectName(QStringLiteral("m_showSeedAction"));
        m_importSeedAction = new QAction(MainWindow);
        m_importSeedAction->setObjectName(QStringLiteral("m_importSeedAction"));
        m_createNondeterministicWalletAction = new QAction(MainWindow);
        m_createNondeterministicWalletAction->setObjectName(QStringLiteral("m_createNondeterministicWalletAction"));
        m_openPaymentRequestAction = new QAction(MainWindow);
        m_openPaymentRequestAction->setObjectName(QStringLiteral("m_openPaymentRequestAction"));
        m_createPaymentRequestAction = new QAction(MainWindow);
        m_createPaymentRequestAction->setObjectName(QStringLiteral("m_createPaymentRequestAction"));
        m_manualFeeAction = new QAction(MainWindow);
        m_manualFeeAction->setObjectName(QStringLiteral("m_manualFeeAction"));
        m_manualFeeAction->setCheckable(true);
        m_signMessageAction = new QAction(MainWindow);
        m_signMessageAction->setObjectName(QStringLiteral("m_signMessageAction"));
        m_verifyMessageAction = new QAction(MainWindow);
        m_verifyMessageAction->setObjectName(QStringLiteral("m_verifyMessageAction"));
        m_getBalanceProofAction = new QAction(MainWindow);
        m_getBalanceProofAction->setObjectName(QStringLiteral("m_getBalanceProofAction"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        m_headerFrame = new QFrame(centralwidget);
        m_headerFrame->setObjectName(QStringLiteral("m_headerFrame"));
        m_headerFrame->setMinimumSize(QSize(0, 116));
        m_headerFrame->setMaximumSize(QSize(16777215, 116));
        m_headerFrame->setFrameShape(QFrame::NoFrame);
        m_headerFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(m_headerFrame);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 25, 0);
        horizontalSpacer_5 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        m_noWalletLabel = new WalletGui::WalletSmallGrayTextLabel(m_headerFrame);
        m_noWalletLabel->setObjectName(QStringLiteral("m_noWalletLabel"));

        horizontalLayout_3->addWidget(m_noWalletLabel);

        m_walletFrame = new QFrame(m_headerFrame);
        m_walletFrame->setObjectName(QStringLiteral("m_walletFrame"));
        m_walletFrame->setFrameShape(QFrame::NoFrame);
        m_walletFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(m_walletFrame);
        verticalLayout_3->setSpacing(5);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout_3->addItem(verticalSpacer_3);

        m_walletLabel = new QLabel(m_walletFrame);
        m_walletLabel->setObjectName(QStringLiteral("m_walletLabel"));
        m_walletLabel->setIndent(0);

        verticalLayout_3->addWidget(m_walletLabel);

        m_addressLabel = new QLabel(m_walletFrame);
        m_addressLabel->setObjectName(QStringLiteral("m_addressLabel"));
        sizePolicy.setHeightForWidth(m_addressLabel->sizePolicy().hasHeightForWidth());
        m_addressLabel->setSizePolicy(sizePolicy);
        m_addressLabel->setCursor(QCursor(Qt::PointingHandCursor));
        m_addressLabel->setIndent(0);

        verticalLayout_3->addWidget(m_addressLabel);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        m_notEncryptedFrame = new QFrame(m_walletFrame);
        m_notEncryptedFrame->setObjectName(QStringLiteral("m_notEncryptedFrame"));
        sizePolicy.setHeightForWidth(m_notEncryptedFrame->sizePolicy().hasHeightForWidth());
        m_notEncryptedFrame->setSizePolicy(sizePolicy);
        m_notEncryptedFrame->setMaximumSize(QSize(16777215, 20));
        m_notEncryptedFrame->setBaseSize(QSize(0, 0));
        m_notEncryptedFrame->setFrameShape(QFrame::NoFrame);
        m_notEncryptedFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout_4 = new QHBoxLayout(m_notEncryptedFrame);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        m_notEncryptedIconLabel = new QLabel(m_notEncryptedFrame);
        m_notEncryptedIconLabel->setObjectName(QStringLiteral("m_notEncryptedIconLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(m_notEncryptedIconLabel->sizePolicy().hasHeightForWidth());
        m_notEncryptedIconLabel->setSizePolicy(sizePolicy1);
        m_notEncryptedIconLabel->setMinimumSize(QSize(0, 20));
        m_notEncryptedIconLabel->setMaximumSize(QSize(16777215, 20));
        m_notEncryptedIconLabel->setPixmap(QPixmap(QString::fromUtf8(":/icons/lock_open_gray")));
        m_notEncryptedIconLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(m_notEncryptedIconLabel, 0, Qt::AlignVCenter);

        horizontalSpacer_11 = new QSpacerItem(5, 3, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_11);

        m_notEncryptedTextLabel = new WalletGui::WalletTinyGrayTextLabel(m_notEncryptedFrame);
        m_notEncryptedTextLabel->setObjectName(QStringLiteral("m_notEncryptedTextLabel"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(m_notEncryptedTextLabel->sizePolicy().hasHeightForWidth());
        m_notEncryptedTextLabel->setSizePolicy(sizePolicy2);
        m_notEncryptedTextLabel->setMinimumSize(QSize(0, 20));
        m_notEncryptedTextLabel->setMaximumSize(QSize(16777215, 20));
        m_notEncryptedTextLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(m_notEncryptedTextLabel, 0, Qt::AlignVCenter);

        horizontalSpacer_9 = new QSpacerItem(3, 3, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_9);

        m_encryptButton = new WalletGui::WalletTinyLinkLikeButton(m_notEncryptedFrame);
        m_encryptButton->setObjectName(QStringLiteral("m_encryptButton"));
        sizePolicy1.setHeightForWidth(m_encryptButton->sizePolicy().hasHeightForWidth());
        m_encryptButton->setSizePolicy(sizePolicy1);
        m_encryptButton->setMinimumSize(QSize(0, 20));
        m_encryptButton->setCursor(QCursor(Qt::PointingHandCursor));
        m_encryptButton->setFlat(true);

        horizontalLayout_4->addWidget(m_encryptButton, 0, Qt::AlignVCenter);

        horizontalSpacer_4 = new QSpacerItem(20, 3, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);


        horizontalLayout_2->addWidget(m_notEncryptedFrame, 0, Qt::AlignTop);

        m_showQrCodeButton = new WalletGui::WalletTinyLinkLikeButton(m_walletFrame);
        m_showQrCodeButton->setObjectName(QStringLiteral("m_showQrCodeButton"));
        sizePolicy1.setHeightForWidth(m_showQrCodeButton->sizePolicy().hasHeightForWidth());
        m_showQrCodeButton->setSizePolicy(sizePolicy1);
        m_showQrCodeButton->setMinimumSize(QSize(0, 20));
        m_showQrCodeButton->setMaximumSize(QSize(16777215, 20));
        m_showQrCodeButton->setCursor(QCursor(Qt::PointingHandCursor));
        m_showQrCodeButton->setFocusPolicy(Qt::NoFocus);
        m_showQrCodeButton->setAutoFillBackground(true);
        m_showQrCodeButton->setFlat(true);

        horizontalLayout_2->addWidget(m_showQrCodeButton);

        horizontalSpacer_10 = new QSpacerItem(20, 3, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_10);

        m_copyAddressButton = new WalletGui::WalletTinyLinkLikeButton(m_walletFrame);
        m_copyAddressButton->setObjectName(QStringLiteral("m_copyAddressButton"));
        sizePolicy1.setHeightForWidth(m_copyAddressButton->sizePolicy().hasHeightForWidth());
        m_copyAddressButton->setSizePolicy(sizePolicy1);
        m_copyAddressButton->setMinimumSize(QSize(0, 20));
        m_copyAddressButton->setMaximumSize(QSize(16777215, 20));
        m_copyAddressButton->setCursor(QCursor(Qt::PointingHandCursor));
        m_copyAddressButton->setFocusPolicy(Qt::NoFocus);
        m_copyAddressButton->setAutoFillBackground(true);
        m_copyAddressButton->setFlat(true);

        horizontalLayout_2->addWidget(m_copyAddressButton);

        horizontalSpacer_7 = new QSpacerItem(13, 3, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_7);

        m_copyAddressLabel = new WalletGui::CopyMagicLabel(m_walletFrame);
        m_copyAddressLabel->setObjectName(QStringLiteral("m_copyAddressLabel"));
        sizePolicy2.setHeightForWidth(m_copyAddressLabel->sizePolicy().hasHeightForWidth());
        m_copyAddressLabel->setSizePolicy(sizePolicy2);
        m_copyAddressLabel->setMinimumSize(QSize(0, 20));
        m_copyAddressLabel->setMaximumSize(QSize(16777215, 20));
        m_copyAddressLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(m_copyAddressLabel, 0, Qt::AlignVCenter);

        horizontalSpacer = new QSpacerItem(40, 3, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout_3->addLayout(horizontalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout_3->addItem(verticalSpacer_2);


        horizontalLayout_3->addWidget(m_walletFrame);

        horizontalSpacer_3 = new QSpacerItem(34, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        horizontalSpacer_8 = new QSpacerItem(34, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_8);

        m_balanceFrame = new QFrame(m_headerFrame);
        m_balanceFrame->setObjectName(QStringLiteral("m_balanceFrame"));
        gridLayout = new QGridLayout(m_balanceFrame);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setVerticalSpacing(3);
        gridLayout->setContentsMargins(0, 30, 0, 0);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        m_balanceTextLabel = new QLabel(m_balanceFrame);
        m_balanceTextLabel->setObjectName(QStringLiteral("m_balanceTextLabel"));

        verticalLayout_4->addWidget(m_balanceTextLabel);

        m_balanceLabel = new QLabel(m_balanceFrame);
        m_balanceLabel->setObjectName(QStringLiteral("m_balanceLabel"));
        m_balanceLabel->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout_4->addWidget(m_balanceLabel);


        gridLayout->addLayout(verticalLayout_4, 0, 2, 1, 1);

        m_balanceCopyLabel = new WalletGui::CopyMagicLabel(m_balanceFrame);
        m_balanceCopyLabel->setObjectName(QStringLiteral("m_balanceCopyLabel"));

        gridLayout->addWidget(m_balanceCopyLabel, 1, 2, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(2, 39, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_6, 0, 1, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 50, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_5, 2, 2, 1, 1);

        m_balanceIconLabel = new QLabel(m_balanceFrame);
        m_balanceIconLabel->setObjectName(QStringLiteral("m_balanceIconLabel"));
        m_balanceIconLabel->setPixmap(QPixmap(QString::fromUtf8(":/icons/total_balance")));

        gridLayout->addWidget(m_balanceIconLabel, 0, 0, 1, 1);


        horizontalLayout_3->addWidget(m_balanceFrame, 0, Qt::AlignRight|Qt::AlignVCenter);


        verticalLayout_2->addWidget(m_headerFrame);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        m_toolFrame = new QFrame(centralwidget);
        m_toolFrame->setObjectName(QStringLiteral("m_toolFrame"));
        m_toolFrame->setFrameShape(QFrame::NoFrame);
        m_toolFrame->setFrameShadow(QFrame::Plain);
        m_toolFrame->setLineWidth(0);
        verticalLayout = new QVBoxLayout(m_toolFrame);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        m_overviewButton = new QPushButton(m_toolFrame);
        m_toolButtonGroup = new QButtonGroup(MainWindow);
        m_toolButtonGroup->setObjectName(QStringLiteral("m_toolButtonGroup"));
        m_toolButtonGroup->setExclusive(true);
        m_toolButtonGroup->addButton(m_overviewButton);
        m_overviewButton->setObjectName(QStringLiteral("m_overviewButton"));
        sizePolicy1.setHeightForWidth(m_overviewButton->sizePolicy().hasHeightForWidth());
        m_overviewButton->setSizePolicy(sizePolicy1);
        m_overviewButton->setFocusPolicy(Qt::NoFocus);
        m_overviewButton->setCheckable(true);

        verticalLayout->addWidget(m_overviewButton);

        m_sendButton = new QPushButton(m_toolFrame);
        m_toolButtonGroup->addButton(m_sendButton);
        m_sendButton->setObjectName(QStringLiteral("m_sendButton"));
        sizePolicy1.setHeightForWidth(m_sendButton->sizePolicy().hasHeightForWidth());
        m_sendButton->setSizePolicy(sizePolicy1);
        m_sendButton->setFocusPolicy(Qt::NoFocus);
        m_sendButton->setCheckable(true);

        verticalLayout->addWidget(m_sendButton);

        m_receiveButton = new QPushButton(m_toolFrame);
        m_toolButtonGroup->addButton(m_receiveButton);
        m_receiveButton->setObjectName(QStringLiteral("m_receiveButton"));
        m_receiveButton->setFocusPolicy(Qt::NoFocus);
        m_receiveButton->setCheckable(true);

        verticalLayout->addWidget(m_receiveButton);

        m_transactionsButton = new QPushButton(m_toolFrame);
        m_toolButtonGroup->addButton(m_transactionsButton);
        m_transactionsButton->setObjectName(QStringLiteral("m_transactionsButton"));
        sizePolicy1.setHeightForWidth(m_transactionsButton->sizePolicy().hasHeightForWidth());
        m_transactionsButton->setSizePolicy(sizePolicy1);
        m_transactionsButton->setFocusPolicy(Qt::NoFocus);
        m_transactionsButton->setCheckable(true);

        verticalLayout->addWidget(m_transactionsButton);

        m_addressBookButton = new QPushButton(m_toolFrame);
        m_toolButtonGroup->addButton(m_addressBookButton);
        m_addressBookButton->setObjectName(QStringLiteral("m_addressBookButton"));
        sizePolicy1.setHeightForWidth(m_addressBookButton->sizePolicy().hasHeightForWidth());
        m_addressBookButton->setSizePolicy(sizePolicy1);
        m_addressBookButton->setFocusPolicy(Qt::NoFocus);
        m_addressBookButton->setCheckable(true);

        verticalLayout->addWidget(m_addressBookButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addWidget(m_toolFrame);

        m_overviewFrame = new WalletGui::OverviewFrame(centralwidget);
        m_overviewFrame->setObjectName(QStringLiteral("m_overviewFrame"));
        m_overviewFrame->setFrameShape(QFrame::NoFrame);
        m_overviewFrame->setFrameShadow(QFrame::Raised);

        horizontalLayout->addWidget(m_overviewFrame);

        m_sendFrame = new WalletGui::SendFrame(centralwidget);
        m_sendFrame->setObjectName(QStringLiteral("m_sendFrame"));
        m_sendFrame->setFrameShape(QFrame::NoFrame);
        m_sendFrame->setFrameShadow(QFrame::Raised);

        horizontalLayout->addWidget(m_sendFrame);

        m_transactionsFrame = new WalletGui::TransactionsFrame(centralwidget);
        m_transactionsFrame->setObjectName(QStringLiteral("m_transactionsFrame"));
        m_transactionsFrame->setFrameShape(QFrame::NoFrame);
        m_transactionsFrame->setFrameShadow(QFrame::Raised);

        horizontalLayout->addWidget(m_transactionsFrame);

        m_addressBookFrame = new WalletGui::AddressBookFrame(centralwidget);
        m_addressBookFrame->setObjectName(QStringLiteral("m_addressBookFrame"));
        m_addressBookFrame->setFrameShape(QFrame::NoFrame);
        m_addressBookFrame->setFrameShadow(QFrame::Raised);

        horizontalLayout->addWidget(m_addressBookFrame);

        m_noWalletFrame = new WalletGui::NoWalletFrame(centralwidget);
        m_noWalletFrame->setObjectName(QStringLiteral("m_noWalletFrame"));
        m_noWalletFrame->setFrameShape(QFrame::NoFrame);
        m_noWalletFrame->setFrameShadow(QFrame::Raised);

        horizontalLayout->addWidget(m_noWalletFrame);

        m_receiveFrame = new WalletGui::ReceiveFrame(centralwidget);
        m_receiveFrame->setObjectName(QStringLiteral("m_receiveFrame"));
        m_receiveFrame->setFrameShape(QFrame::NoFrame);
        m_receiveFrame->setFrameShadow(QFrame::Raised);

        horizontalLayout->addWidget(m_receiveFrame);


        verticalLayout_2->addLayout(horizontalLayout);

        m_syncProgress = new QProgressBar(centralwidget);
        m_syncProgress->setObjectName(QStringLiteral("m_syncProgress"));
        m_syncProgress->setMaximum(100);
        m_syncProgress->setValue(0);
        m_syncProgress->setTextVisible(false);

        verticalLayout_2->addWidget(m_syncProgress);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1060, 20));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuSettings = new QMenu(menubar);
        menuSettings->setObjectName(QStringLiteral("menuSettings"));
        menuThemes = new QMenu(menuSettings);
        menuThemes->setObjectName(QStringLiteral("menuThemes"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        menuPayment = new QMenu(menubar);
        menuPayment->setObjectName(QStringLiteral("menuPayment"));
        menuWallet = new QMenu(menubar);
        menuWallet->setObjectName(QStringLiteral("menuWallet"));
        MainWindow->setMenuBar(menubar);
        statusBar = new WalletGui::WalletStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuWallet->menuAction());
        menubar->addAction(menuPayment->menuAction());
        menubar->addAction(menuSettings->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuFile->addAction(m_createWalletAction);
        menuFile->addAction(m_createNondeterministicWalletAction);
        menuFile->addAction(m_openWalletAction);
        menuFile->addAction(m_closeWalletAction);
        menuFile->addAction(m_recentWalletsAction);
        menuFile->addSeparator();
        menuFile->addAction(m_signMessageAction);
        menuFile->addAction(m_verifyMessageAction);
        menuFile->addSeparator();
        menuFile->addAction(m_exitAction);
        menuSettings->addAction(m_autostartAction);
        menuSettings->addAction(m_minimizeToTrayAction);
        menuSettings->addAction(m_closeToTrayAction);
        menuSettings->addAction(m_manualFeeAction);
        menuSettings->addSeparator();
        menuSettings->addAction(m_preferencesAction);
        menuSettings->addAction(menuThemes->menuAction());
        menuHelp->addAction(m_communityForumAction);
        menuHelp->addAction(m_reportIssueAction);
        menuHelp->addAction(m_aboutQwertycoinAction);
        menuHelp->addAction(m_aboutQtAction);
        menuPayment->addAction(m_createPaymentRequestAction);
        menuPayment->addAction(m_openPaymentRequestAction);
        menuWallet->addAction(m_encryptWalletAction);
        menuWallet->addAction(m_changePasswordAction);
        menuWallet->addSeparator();
        menuWallet->addAction(m_backupWalletAction);
        menuWallet->addAction(m_saveKeysAction);
        menuWallet->addAction(m_importKeyAction);
        menuWallet->addAction(m_exportKeyAction);
        menuWallet->addAction(m_exportTrackingKeyAction);
        menuWallet->addSeparator();
        menuWallet->addAction(m_showSeedAction);
        menuWallet->addAction(m_importSeedAction);
        menuWallet->addSeparator();
        menuWallet->addAction(m_getBalanceProofAction);
        menuWallet->addSeparator();
        menuWallet->addAction(m_resetAction);

        retranslateUi(MainWindow);
        QObject::connect(m_createWalletAction, SIGNAL(triggered()), MainWindow, SLOT(createWallet()));
        QObject::connect(m_openWalletAction, SIGNAL(triggered()), MainWindow, SLOT(openWallet()));
        QObject::connect(m_encryptWalletAction, SIGNAL(triggered()), MainWindow, SLOT(encryptWallet()));
        QObject::connect(m_changePasswordAction, SIGNAL(triggered()), MainWindow, SLOT(encryptWallet()));
        QObject::connect(m_aboutQtAction, SIGNAL(triggered()), MainWindow, SLOT(aboutQt()));
        QObject::connect(m_backupWalletAction, SIGNAL(triggered()), MainWindow, SLOT(backupWallet()));
        QObject::connect(m_aboutQwertycoinAction, SIGNAL(triggered()), MainWindow, SLOT(about()));
        QObject::connect(m_overviewButton, SIGNAL(toggled(bool)), m_overviewFrame, SLOT(setVisible(bool)));
        QObject::connect(m_transactionsButton, SIGNAL(toggled(bool)), m_transactionsFrame, SLOT(setVisible(bool)));
        QObject::connect(m_addressBookButton, SIGNAL(toggled(bool)), m_addressBookFrame, SLOT(setVisible(bool)));
        QObject::connect(m_sendButton, SIGNAL(toggled(bool)), m_sendFrame, SLOT(setVisible(bool)));
        QObject::connect(m_copyAddressButton, SIGNAL(clicked()), MainWindow, SLOT(copyAddress()));
        QObject::connect(m_autostartAction, SIGNAL(triggered(bool)), MainWindow, SLOT(setStartOnLoginEnabled(bool)));
        QObject::connect(m_minimizeToTrayAction, SIGNAL(triggered(bool)), MainWindow, SLOT(setMinimizeToTrayEnabled(bool)));
        QObject::connect(m_closeToTrayAction, SIGNAL(triggered(bool)), MainWindow, SLOT(setCloseToTrayEnabled(bool)));
        QObject::connect(m_encryptButton, SIGNAL(clicked()), m_encryptWalletAction, SLOT(trigger()));
        QObject::connect(m_preferencesAction, SIGNAL(triggered()), MainWindow, SLOT(showPreferences()));
        QObject::connect(m_exportTrackingKeyAction, SIGNAL(triggered()), MainWindow, SLOT(exportTrackingKey()));
        QObject::connect(m_importKeyAction, SIGNAL(triggered()), MainWindow, SLOT(importKey()));
        QObject::connect(m_communityForumAction, SIGNAL(triggered()), MainWindow, SLOT(communityForumTriggered()));
        QObject::connect(m_reportIssueAction, SIGNAL(triggered()), MainWindow, SLOT(reportIssueTriggered()));
        QObject::connect(m_resetAction, SIGNAL(triggered()), MainWindow, SLOT(resetWallet()));
        QObject::connect(m_saveKeysAction, SIGNAL(triggered()), MainWindow, SLOT(saveWalletKeys()));
        QObject::connect(m_exportKeyAction, SIGNAL(triggered()), MainWindow, SLOT(exportKey()));
        QObject::connect(m_showQrCodeButton, SIGNAL(clicked()), MainWindow, SLOT(showQrCode()));
        QObject::connect(m_closeWalletAction, SIGNAL(triggered()), MainWindow, SLOT(closeWallet()));
        QObject::connect(m_showSeedAction, SIGNAL(triggered()), MainWindow, SLOT(showMnemonicSeed()));
        QObject::connect(m_importSeedAction, SIGNAL(triggered()), MainWindow, SLOT(restoreFromMnemonicSeed()));
        QObject::connect(m_createNondeterministicWalletAction, SIGNAL(triggered()), MainWindow, SLOT(createNonDeterministicWallet()));
        QObject::connect(m_openPaymentRequestAction, SIGNAL(triggered()), MainWindow, SLOT(openPaymentRequestClicked()));
        QObject::connect(m_receiveButton, SIGNAL(toggled(bool)), m_receiveFrame, SLOT(setVisible(bool)));
        QObject::connect(m_createPaymentRequestAction, SIGNAL(triggered()), m_receiveButton, SLOT(toggle()));
        QObject::connect(m_manualFeeAction, SIGNAL(triggered(bool)), m_sendFrame, SLOT(enableManualFee(bool)));
        QObject::connect(m_signMessageAction, SIGNAL(triggered()), MainWindow, SLOT(signMessage()));
        QObject::connect(m_verifyMessageAction, SIGNAL(triggered()), MainWindow, SLOT(verifyMessage()));
        QObject::connect(m_getBalanceProofAction, SIGNAL(triggered()), MainWindow, SLOT(getBalanceProof()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        m_exitAction->setText(QApplication::translate("MainWindow", "Exit", nullptr));
#ifndef QT_NO_SHORTCUT
        m_exitAction->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", nullptr));
#endif // QT_NO_SHORTCUT
        m_createWalletAction->setText(QApplication::translate("MainWindow", "Create wallet", nullptr));
        m_openWalletAction->setText(QApplication::translate("MainWindow", "Open wallet", nullptr));
        m_encryptWalletAction->setText(QApplication::translate("MainWindow", "Encrypt wallet", nullptr));
        m_changePasswordAction->setText(QApplication::translate("MainWindow", "Change password", nullptr));
#ifndef QT_NO_TOOLTIP
        m_changePasswordAction->setToolTip(QApplication::translate("MainWindow", "Change password", nullptr));
#endif // QT_NO_TOOLTIP
        m_aboutQwertycoinAction->setText(QApplication::translate("MainWindow", "About Qwertycoin Zero Wallet", nullptr));
        m_aboutQtAction->setText(QApplication::translate("MainWindow", "About Qt", nullptr));
        m_backupWalletAction->setText(QApplication::translate("MainWindow", "Backup wallet", nullptr));
        m_autostartAction->setText(QApplication::translate("MainWindow", "Start on system login", nullptr));
        m_minimizeToTrayAction->setText(QApplication::translate("MainWindow", "Minimize to tray", nullptr));
        m_closeToTrayAction->setText(QApplication::translate("MainWindow", "Close to tray", nullptr));
        m_preferencesAction->setText(QApplication::translate("MainWindow", "Preferences", nullptr));
        m_recentWalletsAction->setText(QApplication::translate("MainWindow", "Recent wallets", nullptr));
        m_exportTrackingKeyAction->setText(QApplication::translate("MainWindow", "Export tracking key", nullptr));
#ifndef QT_NO_TOOLTIP
        m_exportTrackingKeyAction->setToolTip(QApplication::translate("MainWindow", "Export tracking key", nullptr));
#endif // QT_NO_TOOLTIP
        m_importKeyAction->setText(QApplication::translate("MainWindow", "Import key", nullptr));
#ifndef QT_NO_TOOLTIP
        m_importKeyAction->setToolTip(QApplication::translate("MainWindow", "Import key", nullptr));
#endif // QT_NO_TOOLTIP
        m_communityForumAction->setText(QApplication::translate("MainWindow", "Community forum", nullptr));
        m_reportIssueAction->setText(QApplication::translate("MainWindow", "Report an issue", nullptr));
        m_resetAction->setText(QApplication::translate("MainWindow", "Reset wallet", nullptr));
        m_saveKeysAction->setText(QApplication::translate("MainWindow", "Save wallet keys", nullptr));
        m_exportKeyAction->setText(QApplication::translate("MainWindow", "Export key", nullptr));
#ifndef QT_NO_TOOLTIP
        m_exportKeyAction->setToolTip(QApplication::translate("MainWindow", "Export key", nullptr));
#endif // QT_NO_TOOLTIP
        m_closeWalletAction->setText(QApplication::translate("MainWindow", "Close wallet", nullptr));
        m_showSeedAction->setText(QApplication::translate("MainWindow", "Show mnemonic seed", nullptr));
        m_importSeedAction->setText(QApplication::translate("MainWindow", "Import mnemonic seed", nullptr));
        m_createNondeterministicWalletAction->setText(QApplication::translate("MainWindow", "Create nondeterministic wallet", nullptr));
        m_openPaymentRequestAction->setText(QApplication::translate("MainWindow", "Open payment request", nullptr));
        m_createPaymentRequestAction->setText(QApplication::translate("MainWindow", "Create payment request", nullptr));
        m_manualFeeAction->setText(QApplication::translate("MainWindow", "Enable manual fee override", nullptr));
        m_signMessageAction->setText(QApplication::translate("MainWindow", "Sign message", nullptr));
        m_verifyMessageAction->setText(QApplication::translate("MainWindow", "Verify message", nullptr));
        m_getBalanceProofAction->setText(QApplication::translate("MainWindow", "Proof of balance", nullptr));
        m_noWalletLabel->setText(QApplication::translate("MainWindow", "No active wallet", nullptr));
        m_walletLabel->setText(QApplication::translate("MainWindow", "Your wallet:", nullptr));
#ifndef QT_NO_TOOLTIP
        m_addressLabel->setToolTip(QApplication::translate("MainWindow", "Click to copy", nullptr));
#endif // QT_NO_TOOLTIP
        m_addressLabel->setText(QApplication::translate("MainWindow", "ADDRESS", nullptr));
        m_notEncryptedIconLabel->setText(QString());
        m_notEncryptedTextLabel->setText(QApplication::translate("MainWindow", "Wallet not encrypted!", nullptr));
        m_encryptButton->setText(QApplication::translate("MainWindow", "Set password", nullptr));
        m_showQrCodeButton->setText(QApplication::translate("MainWindow", "Show QR Code", nullptr));
        m_copyAddressButton->setText(QApplication::translate("MainWindow", "Copy address", nullptr));
        m_copyAddressLabel->setText(QApplication::translate("MainWindow", "Address copied to clipboard", nullptr));
        m_balanceTextLabel->setText(QApplication::translate("MainWindow", "Total balance", nullptr));
#ifndef QT_NO_TOOLTIP
        m_balanceLabel->setToolTip(QApplication::translate("MainWindow", "Click to copy", nullptr));
#endif // QT_NO_TOOLTIP
        m_balanceLabel->setText(QApplication::translate("MainWindow", "0.00", nullptr));
        m_balanceCopyLabel->setText(QApplication::translate("MainWindow", "Copied!", nullptr));
        m_balanceIconLabel->setText(QString());
        m_overviewButton->setText(QApplication::translate("MainWindow", "OVERVIEW", nullptr));
        m_sendButton->setText(QApplication::translate("MainWindow", "SEND", nullptr));
        m_receiveButton->setText(QApplication::translate("MainWindow", "RECEIVE", nullptr));
        m_transactionsButton->setText(QApplication::translate("MainWindow", "HISTORY", nullptr));
        m_addressBookButton->setText(QApplication::translate("MainWindow", "CONTACTS", nullptr));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", nullptr));
        menuSettings->setTitle(QApplication::translate("MainWindow", "Settings", nullptr));
        menuThemes->setTitle(QApplication::translate("MainWindow", "Themes", nullptr));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", nullptr));
        menuPayment->setTitle(QApplication::translate("MainWindow", "Payment", nullptr));
        menuWallet->setTitle(QApplication::translate("MainWindow", "Wallet", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
