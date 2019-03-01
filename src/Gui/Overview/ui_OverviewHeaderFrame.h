/********************************************************************************
** Form generated from reading UI file 'OverviewHeaderFrame.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OVERVIEWHEADERFRAME_H
#define UI_OVERVIEWHEADERFRAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include "Gui/Common/CopyMagicLabel.h"
#include "Gui/Common/WalletTextLabel.h"

QT_BEGIN_NAMESPACE

class Ui_OverviewHeaderFrame
{
public:
    QHBoxLayout *horizontalLayout;
    QFrame *m_overviewBalanceFrame;
    QGridLayout *gridLayout;
    WalletGui::WalletHeaderLabel *label;
    WalletGui::WalletNormalGrayTextLabel *m_overviewLockedBalanceTickerLabel;
    WalletGui::WalletSmallGrayTextLabel *m_overviewAvailableBalanceTextLabel;
    WalletGui::WalletSmallGrayTextLabel *m_overviewLockedBalanceTextLabel;
    WalletGui::WalletNormalGreenBoldTextLabel *m_overviewTotalBalanceTickerLabel;
    WalletGui::WalletNormalGrayTextLabel *m_overviewAvailableBalanceLabel;
    QLabel *m_overviewBalanceIconLabel;
    WalletGui::WalletNormalGrayTextLabel *m_overviewLockedBalanceLabel;
    WalletGui::WalletNormalGreenBoldTextLabel *m_overviewTotalBalanceLabel;
    QSpacerItem *verticalSpacer;
    WalletGui::WalletNormalGrayTextLabel *m_overviewAvailableBalanceTickerLabel;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_4;
    WalletGui::WalletSmallGreenBoldTextLabel *m_overviewTotalBalanceTextLabel;
    WalletGui::CopyMagicLabel *m_availableBalanceCopyLabel;
    WalletGui::CopyMagicLabel *m_lockedBalanceCopyLabel;
    WalletGui::CopyMagicLabel *m_totalBalanceCopyLabel;
    QSpacerItem *verticalSpacer_8;
    QFrame *m_overviewNodeFrame;
    QGridLayout *gridLayout_3;
    WalletGui::WalletSmallBlackTextLabel *m_overviewNodeTextLabel;
    WalletGui::WalletNormalBlackTextLabel *m_overviewMasternode;
    WalletGui::WalletSmallBlackTextLabel *m_overviewNodeStateTextLabel;
    QSpacerItem *verticalSpacer_9;
    WalletGui::WalletNormalBlackTextLabel *m_overviewConnectionState;
    QSpacerItem *horizontalSpacer_6;
    WalletGui::WalletSmallBlackTextLabel *m_overviewNodeVersionTextLabel;
    WalletGui::WalletSmallBlackTextLabel *m_overviewNodeVersionLabel;
    QSpacerItem *horizontalSpacer_3;
    WalletGui::WalletHeaderLabel *label_9;
    QLabel *m_overviewNodeIconLabel;
    QSpacerItem *verticalSpacer_6;
    QSpacerItem *verticalSpacer_5;

    void setupUi(QFrame *OverviewHeaderFrame)
    {
        if (OverviewHeaderFrame->objectName().isEmpty())
            OverviewHeaderFrame->setObjectName(QStringLiteral("OverviewHeaderFrame"));
        OverviewHeaderFrame->resize(1068, 155);
        OverviewHeaderFrame->setFrameShape(QFrame::NoFrame);
        OverviewHeaderFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(OverviewHeaderFrame);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        m_overviewBalanceFrame = new QFrame(OverviewHeaderFrame);
        m_overviewBalanceFrame->setObjectName(QStringLiteral("m_overviewBalanceFrame"));
        m_overviewBalanceFrame->setFrameShape(QFrame::NoFrame);
        m_overviewBalanceFrame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(m_overviewBalanceFrame);
        gridLayout->setSpacing(5);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(30, 25, -1, 15);
        label = new WalletGui::WalletHeaderLabel(m_overviewBalanceFrame);
        label->setObjectName(QStringLiteral("label"));
        label->setIndent(0);

        gridLayout->addWidget(label, 1, 2, 1, 5);

        m_overviewLockedBalanceTickerLabel = new WalletGui::WalletNormalGrayTextLabel(m_overviewBalanceFrame);
        m_overviewLockedBalanceTickerLabel->setObjectName(QStringLiteral("m_overviewLockedBalanceTickerLabel"));
        m_overviewLockedBalanceTickerLabel->setIndent(0);

        gridLayout->addWidget(m_overviewLockedBalanceTickerLabel, 4, 4, 1, 1, Qt::AlignLeft);

        m_overviewAvailableBalanceTextLabel = new WalletGui::WalletSmallGrayTextLabel(m_overviewBalanceFrame);
        m_overviewAvailableBalanceTextLabel->setObjectName(QStringLiteral("m_overviewAvailableBalanceTextLabel"));
        m_overviewAvailableBalanceTextLabel->setIndent(0);

        gridLayout->addWidget(m_overviewAvailableBalanceTextLabel, 3, 2, 1, 1);

        m_overviewLockedBalanceTextLabel = new WalletGui::WalletSmallGrayTextLabel(m_overviewBalanceFrame);
        m_overviewLockedBalanceTextLabel->setObjectName(QStringLiteral("m_overviewLockedBalanceTextLabel"));
        m_overviewLockedBalanceTextLabel->setIndent(0);

        gridLayout->addWidget(m_overviewLockedBalanceTextLabel, 4, 2, 1, 1);

        m_overviewTotalBalanceTickerLabel = new WalletGui::WalletNormalGreenBoldTextLabel(m_overviewBalanceFrame);
        m_overviewTotalBalanceTickerLabel->setObjectName(QStringLiteral("m_overviewTotalBalanceTickerLabel"));
        m_overviewTotalBalanceTickerLabel->setIndent(0);

        gridLayout->addWidget(m_overviewTotalBalanceTickerLabel, 5, 4, 1, 1);

        m_overviewAvailableBalanceLabel = new WalletGui::WalletNormalGrayTextLabel(m_overviewBalanceFrame);
        m_overviewAvailableBalanceLabel->setObjectName(QStringLiteral("m_overviewAvailableBalanceLabel"));
        m_overviewAvailableBalanceLabel->setCursor(QCursor(Qt::PointingHandCursor));
        m_overviewAvailableBalanceLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(m_overviewAvailableBalanceLabel, 3, 3, 1, 1);

        m_overviewBalanceIconLabel = new QLabel(m_overviewBalanceFrame);
        m_overviewBalanceIconLabel->setObjectName(QStringLiteral("m_overviewBalanceIconLabel"));
        m_overviewBalanceIconLabel->setPixmap(QPixmap(QString::fromUtf8(":/icons/actual_balance")));

        gridLayout->addWidget(m_overviewBalanceIconLabel, 1, 0, 5, 1);

        m_overviewLockedBalanceLabel = new WalletGui::WalletNormalGrayTextLabel(m_overviewBalanceFrame);
        m_overviewLockedBalanceLabel->setObjectName(QStringLiteral("m_overviewLockedBalanceLabel"));
        m_overviewLockedBalanceLabel->setCursor(QCursor(Qt::PointingHandCursor));
        m_overviewLockedBalanceLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(m_overviewLockedBalanceLabel, 4, 3, 1, 1);

        m_overviewTotalBalanceLabel = new WalletGui::WalletNormalGreenBoldTextLabel(m_overviewBalanceFrame);
        m_overviewTotalBalanceLabel->setObjectName(QStringLiteral("m_overviewTotalBalanceLabel"));
        m_overviewTotalBalanceLabel->setCursor(QCursor(Qt::PointingHandCursor));
        m_overviewTotalBalanceLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(m_overviewTotalBalanceLabel, 5, 3, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 6, 0, 1, 7);

        m_overviewAvailableBalanceTickerLabel = new WalletGui::WalletNormalGrayTextLabel(m_overviewBalanceFrame);
        m_overviewAvailableBalanceTickerLabel->setObjectName(QStringLiteral("m_overviewAvailableBalanceTickerLabel"));
        m_overviewAvailableBalanceTickerLabel->setIndent(0);

        gridLayout->addWidget(m_overviewAvailableBalanceTickerLabel, 3, 4, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 3, 6, 3, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 0, 0, 1, 7);

        horizontalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 1, 1, 5, 1);

        m_overviewTotalBalanceTextLabel = new WalletGui::WalletSmallGreenBoldTextLabel(m_overviewBalanceFrame);
        m_overviewTotalBalanceTextLabel->setObjectName(QStringLiteral("m_overviewTotalBalanceTextLabel"));
        m_overviewTotalBalanceTextLabel->setIndent(0);

        gridLayout->addWidget(m_overviewTotalBalanceTextLabel, 5, 2, 1, 1);

        m_availableBalanceCopyLabel = new WalletGui::CopyMagicLabel(m_overviewBalanceFrame);
        m_availableBalanceCopyLabel->setObjectName(QStringLiteral("m_availableBalanceCopyLabel"));
        m_availableBalanceCopyLabel->setIndent(0);

        gridLayout->addWidget(m_availableBalanceCopyLabel, 3, 5, 1, 1);

        m_lockedBalanceCopyLabel = new WalletGui::CopyMagicLabel(m_overviewBalanceFrame);
        m_lockedBalanceCopyLabel->setObjectName(QStringLiteral("m_lockedBalanceCopyLabel"));
        m_lockedBalanceCopyLabel->setIndent(0);

        gridLayout->addWidget(m_lockedBalanceCopyLabel, 4, 5, 1, 1);

        m_totalBalanceCopyLabel = new WalletGui::CopyMagicLabel(m_overviewBalanceFrame);
        m_totalBalanceCopyLabel->setObjectName(QStringLiteral("m_totalBalanceCopyLabel"));
        m_totalBalanceCopyLabel->setIndent(0);

        gridLayout->addWidget(m_totalBalanceCopyLabel, 5, 5, 1, 1);

        verticalSpacer_8 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_8, 2, 2, 1, 4);


        horizontalLayout->addWidget(m_overviewBalanceFrame);

        m_overviewNodeFrame = new QFrame(OverviewHeaderFrame);
        m_overviewNodeFrame->setObjectName(QStringLiteral("m_overviewNodeFrame"));
        m_overviewNodeFrame->setFrameShape(QFrame::NoFrame);
        m_overviewNodeFrame->setFrameShadow(QFrame::Raised);
        gridLayout_3 = new QGridLayout(m_overviewNodeFrame);
        gridLayout_3->setSpacing(5);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(30, 25, -1, -1);
        m_overviewNodeTextLabel = new WalletGui::WalletSmallBlackTextLabel(m_overviewNodeFrame);
        m_overviewNodeTextLabel->setObjectName(QStringLiteral("m_overviewNodeTextLabel"));
        m_overviewNodeTextLabel->setMinimumSize(QSize(40, 0));
        m_overviewNodeTextLabel->setBaseSize(QSize(0, 0));
        m_overviewNodeTextLabel->setIndent(0);

        gridLayout_3->addWidget(m_overviewNodeTextLabel, 3, 2, 1, 1);

        m_overviewMasternode = new WalletGui::WalletNormalBlackTextLabel(m_overviewNodeFrame);
        m_overviewMasternode->setObjectName(QStringLiteral("m_overviewMasternode"));
        m_overviewMasternode->setIndent(0);
        m_overviewMasternode->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(m_overviewMasternode, 3, 3, 1, 1);

        m_overviewNodeStateTextLabel = new WalletGui::WalletSmallBlackTextLabel(m_overviewNodeFrame);
        m_overviewNodeStateTextLabel->setObjectName(QStringLiteral("m_overviewNodeStateTextLabel"));
        m_overviewNodeStateTextLabel->setMinimumSize(QSize(40, 0));
        m_overviewNodeStateTextLabel->setIndent(0);

        gridLayout_3->addWidget(m_overviewNodeStateTextLabel, 4, 2, 1, 1);

        verticalSpacer_9 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_3->addItem(verticalSpacer_9, 3, 2, 1, 3);

        m_overviewConnectionState = new WalletGui::WalletNormalBlackTextLabel(m_overviewNodeFrame);
        m_overviewConnectionState->setObjectName(QStringLiteral("m_overviewConnectionState"));
        m_overviewConnectionState->setIndent(0);

        gridLayout_3->addWidget(m_overviewConnectionState, 4, 3, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_6, 1, 1, 5, 1);

        m_overviewNodeVersionTextLabel = new WalletGui::WalletSmallBlackTextLabel(m_overviewNodeFrame);
        m_overviewNodeVersionTextLabel->setObjectName(QStringLiteral("m_overviewNodeVersionTextLabel"));
        m_overviewNodeVersionTextLabel->setIndent(0);

        gridLayout_3->addWidget(m_overviewNodeVersionTextLabel, 5, 2, 1, 1);

        m_overviewNodeVersionLabel = new WalletGui::WalletSmallBlackTextLabel(m_overviewNodeFrame);
        m_overviewNodeVersionLabel->setObjectName(QStringLiteral("m_overviewNodeVersionLabel"));
        m_overviewNodeVersionLabel->setIndent(0);
        m_overviewNodeVersionLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(m_overviewNodeVersionLabel, 5, 3, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_3, 3, 5, 3, 1);

        label_9 = new WalletGui::WalletHeaderLabel(m_overviewNodeFrame);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setIndent(0);

        gridLayout_3->addWidget(label_9, 1, 2, 1, 4);

        m_overviewNodeIconLabel = new QLabel(m_overviewNodeFrame);
        m_overviewNodeIconLabel->setObjectName(QStringLiteral("m_overviewNodeIconLabel"));
        m_overviewNodeIconLabel->setPixmap(QPixmap(QString::fromUtf8(":/icons/node")));

        gridLayout_3->addWidget(m_overviewNodeIconLabel, 1, 0, 5, 1);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_6, 6, 0, 1, 6);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_5, 0, 0, 1, 6);


        horizontalLayout->addWidget(m_overviewNodeFrame);


        retranslateUi(OverviewHeaderFrame);

        QMetaObject::connectSlotsByName(OverviewHeaderFrame);
    } // setupUi

    void retranslateUi(QFrame *OverviewHeaderFrame)
    {
        OverviewHeaderFrame->setWindowTitle(QApplication::translate("OverviewHeaderFrame", "Frame", nullptr));
        label->setText(QApplication::translate("OverviewHeaderFrame", "Balance", nullptr));
        m_overviewLockedBalanceTickerLabel->setText(QApplication::translate("OverviewHeaderFrame", "TextLabel", nullptr));
        m_overviewAvailableBalanceTextLabel->setText(QApplication::translate("OverviewHeaderFrame", "Available", nullptr));
        m_overviewLockedBalanceTextLabel->setText(QApplication::translate("OverviewHeaderFrame", "Locked", nullptr));
        m_overviewTotalBalanceTickerLabel->setText(QApplication::translate("OverviewHeaderFrame", "TextLabel", nullptr));
#ifndef QT_NO_TOOLTIP
        m_overviewAvailableBalanceLabel->setToolTip(QApplication::translate("OverviewHeaderFrame", "Click to copy", nullptr));
#endif // QT_NO_TOOLTIP
        m_overviewAvailableBalanceLabel->setText(QApplication::translate("OverviewHeaderFrame", "TextLabel", nullptr));
        m_overviewBalanceIconLabel->setText(QString());
#ifndef QT_NO_TOOLTIP
        m_overviewLockedBalanceLabel->setToolTip(QApplication::translate("OverviewHeaderFrame", "Click to copy", nullptr));
#endif // QT_NO_TOOLTIP
        m_overviewLockedBalanceLabel->setText(QApplication::translate("OverviewHeaderFrame", "TextLabel", nullptr));
#ifndef QT_NO_TOOLTIP
        m_overviewTotalBalanceLabel->setToolTip(QApplication::translate("OverviewHeaderFrame", "Click to copy", nullptr));
#endif // QT_NO_TOOLTIP
        m_overviewTotalBalanceLabel->setText(QApplication::translate("OverviewHeaderFrame", "TextLabel", nullptr));
        m_overviewAvailableBalanceTickerLabel->setText(QApplication::translate("OverviewHeaderFrame", "TextLabel", nullptr));
        m_overviewTotalBalanceTextLabel->setText(QApplication::translate("OverviewHeaderFrame", "Total", nullptr));
        m_availableBalanceCopyLabel->setText(QApplication::translate("OverviewHeaderFrame", "Copied!", nullptr));
        m_lockedBalanceCopyLabel->setText(QApplication::translate("OverviewHeaderFrame", "Copied!", nullptr));
        m_totalBalanceCopyLabel->setText(QApplication::translate("OverviewHeaderFrame", "Copied!", nullptr));
        m_overviewNodeTextLabel->setText(QApplication::translate("OverviewHeaderFrame", "URL", nullptr));
        m_overviewMasternode->setText(QApplication::translate("OverviewHeaderFrame", "TextLabel", nullptr));
        m_overviewNodeStateTextLabel->setText(QApplication::translate("OverviewHeaderFrame", "State", nullptr));
        m_overviewConnectionState->setText(QApplication::translate("OverviewHeaderFrame", "TextLabel", nullptr));
        m_overviewNodeVersionTextLabel->setText(QString());
        m_overviewNodeVersionLabel->setText(QString());
        label_9->setText(QApplication::translate("OverviewHeaderFrame", "Node status", nullptr));
        m_overviewNodeIconLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class OverviewHeaderFrame: public Ui_OverviewHeaderFrame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OVERVIEWHEADERFRAME_H
