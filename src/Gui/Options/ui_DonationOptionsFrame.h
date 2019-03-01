/********************************************************************************
** Form generated from reading UI file 'DonationOptionsFrame.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DONATIONOPTIONSFRAME_H
#define UI_DONATIONOPTIONSFRAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "Gui/Common/WalletTextLabel.h"

QT_BEGIN_NAMESPACE

class Ui_DonationOptionsFrame
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *m_donationMiningFrame;
    QGridLayout *gridLayout;
    QCheckBox *m_enableDonationChangeCheck;
    QFrame *m_donationChangeFrame;
    QGridLayout *gridLayout_2;
    QSpacerItem *verticalSpacer_5;
    WalletGui::WalletNormalBlackTextLabel *label_3;
    QSlider *m_donationChangeAmountSlider;
    QComboBox *m_donationChangeAddressCombo;
    WalletGui::WalletSmallGrayTextLabel *m_donationChangeCommentLabel;
    QDoubleSpinBox *m_donationChangeAmountSpin;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_7;
    QHBoxLayout *horizontalLayout_2;
    WalletGui::WalletNormalBlackTextLabel *label_4;
    WalletGui::WalletSmallGrayTextLabel *label_6;
    QSpacerItem *verticalSpacer;

    void setupUi(QFrame *DonationOptionsFrame)
    {
        if (DonationOptionsFrame->objectName().isEmpty())
            DonationOptionsFrame->setObjectName(QStringLiteral("DonationOptionsFrame"));
        DonationOptionsFrame->resize(701, 540);
        DonationOptionsFrame->setFrameShape(QFrame::NoFrame);
        DonationOptionsFrame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(DonationOptionsFrame);
        verticalLayout->setSpacing(10);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(25, 35, 25, 0);
        m_donationMiningFrame = new QFrame(DonationOptionsFrame);
        m_donationMiningFrame->setObjectName(QStringLiteral("m_donationMiningFrame"));
        m_donationMiningFrame->setFrameShape(QFrame::NoFrame);
        m_donationMiningFrame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(m_donationMiningFrame);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(10);
        gridLayout->setVerticalSpacing(0);
        gridLayout->setContentsMargins(0, 0, 0, 0);

        verticalLayout->addWidget(m_donationMiningFrame);

        m_enableDonationChangeCheck = new QCheckBox(DonationOptionsFrame);
        m_enableDonationChangeCheck->setObjectName(QStringLiteral("m_enableDonationChangeCheck"));

        verticalLayout->addWidget(m_enableDonationChangeCheck);

        m_donationChangeFrame = new QFrame(DonationOptionsFrame);
        m_donationChangeFrame->setObjectName(QStringLiteral("m_donationChangeFrame"));
        m_donationChangeFrame->setFrameShape(QFrame::NoFrame);
        m_donationChangeFrame->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(m_donationChangeFrame);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(10);
        gridLayout_2->setVerticalSpacing(0);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalSpacer_5 = new QSpacerItem(20, 25, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_2->addItem(verticalSpacer_5, 3, 0, 1, 4);

        label_3 = new WalletGui::WalletNormalBlackTextLabel(m_donationChangeFrame);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setIndent(0);

        gridLayout_2->addWidget(label_3, 4, 0, 1, 4);

        m_donationChangeAmountSlider = new QSlider(m_donationChangeFrame);
        m_donationChangeAmountSlider->setObjectName(QStringLiteral("m_donationChangeAmountSlider"));
        m_donationChangeAmountSlider->setMaximumSize(QSize(230, 16777215));
        m_donationChangeAmountSlider->setMinimum(1);
        m_donationChangeAmountSlider->setMaximum(100);
        m_donationChangeAmountSlider->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(m_donationChangeAmountSlider, 5, 0, 1, 1);

        m_donationChangeAddressCombo = new QComboBox(m_donationChangeFrame);
        m_donationChangeAddressCombo->setObjectName(QStringLiteral("m_donationChangeAddressCombo"));

        gridLayout_2->addWidget(m_donationChangeAddressCombo, 2, 0, 1, 4);

        m_donationChangeCommentLabel = new WalletGui::WalletSmallGrayTextLabel(m_donationChangeFrame);
        m_donationChangeCommentLabel->setObjectName(QStringLiteral("m_donationChangeCommentLabel"));
        m_donationChangeCommentLabel->setWordWrap(true);
        m_donationChangeCommentLabel->setIndent(0);

        gridLayout_2->addWidget(m_donationChangeCommentLabel, 5, 3, 1, 1, Qt::AlignVCenter);

        m_donationChangeAmountSpin = new QDoubleSpinBox(m_donationChangeFrame);
        m_donationChangeAmountSpin->setObjectName(QStringLiteral("m_donationChangeAmountSpin"));
        m_donationChangeAmountSpin->setDecimals(1);
        m_donationChangeAmountSpin->setMinimum(0.1);
        m_donationChangeAmountSpin->setMaximum(10);
        m_donationChangeAmountSpin->setSingleStep(0.1);

        gridLayout_2->addWidget(m_donationChangeAmountSpin, 5, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(5, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 5, 2, 1, 1);

        verticalSpacer_7 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_2->addItem(verticalSpacer_7, 1, 0, 1, 4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(5);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, -1, -1, -1);
        label_4 = new WalletGui::WalletNormalBlackTextLabel(m_donationChangeFrame);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMinimumSize(QSize(0, 16));
        label_4->setIndent(0);

        horizontalLayout_2->addWidget(label_4);

        label_6 = new WalletGui::WalletSmallGrayTextLabel(m_donationChangeFrame);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_2->addWidget(label_6);

        horizontalLayout_2->setStretch(1, 1);

        gridLayout_2->addLayout(horizontalLayout_2, 0, 0, 1, 4);

        gridLayout_2->setColumnStretch(0, 1);
        gridLayout_2->setColumnStretch(3, 1);

        verticalLayout->addWidget(m_donationChangeFrame);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(DonationOptionsFrame);
        QObject::connect(m_enableDonationChangeCheck, SIGNAL(toggled(bool)), m_donationChangeFrame, SLOT(setEnabled(bool)));
        QObject::connect(m_donationChangeAmountSlider, SIGNAL(valueChanged(int)), DonationOptionsFrame, SLOT(donationChangeAmountChanged(int)));
        QObject::connect(m_donationChangeAmountSpin, SIGNAL(valueChanged(double)), DonationOptionsFrame, SLOT(donationChangeAmountChanged(double)));

        QMetaObject::connectSlotsByName(DonationOptionsFrame);
    } // setupUi

    void retranslateUi(QFrame *DonationOptionsFrame)
    {
        DonationOptionsFrame->setWindowTitle(QApplication::translate("DonationOptionsFrame", "Frame", nullptr));
        m_enableDonationChangeCheck->setText(QApplication::translate("DonationOptionsFrame", "Random donation on each transaction", nullptr));
        label_3->setText(QApplication::translate("DonationOptionsFrame", "Max % of transaction to be donated", nullptr));
        m_donationChangeCommentLabel->setText(QApplication::translate("DonationOptionsFrame", "The donation percentage is random and may not exceed the setting to the left.", nullptr));
        m_donationChangeAmountSpin->setSuffix(QApplication::translate("DonationOptionsFrame", "%", nullptr));
        label_4->setText(QApplication::translate("DonationOptionsFrame", "Address for donations", nullptr));
        label_6->setText(QApplication::translate("DonationOptionsFrame", "(Donation addresses can be added in Contacts)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DonationOptionsFrame: public Ui_DonationOptionsFrame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DONATIONOPTIONSFRAME_H
