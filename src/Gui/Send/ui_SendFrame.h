/********************************************************************************
** Form generated from reading UI file 'SendFrame.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SENDFRAME_H
#define UI_SENDFRAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Gui/Common/ClearableLineEdit.h"
#include "Gui/Common/ResizableScrollArea.h"
#include "Gui/Common/WalletBlueButton.h"
#include "Gui/Common/WalletLinkLikeButton.h"
#include "Gui/Common/WalletTextLabel.h"

QT_BEGIN_NAMESPACE

class Ui_SendFrame
{
public:
    QVBoxLayout *verticalLayout;
    WalletGui::ResizableScrollArea *m_sendScrollarea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *m_transfersLayout;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    WalletGui::WalletNormalLinkLikeButton *m_addRecipientButton;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;
    QFrame *m_sendFeeFrame;
    QGridLayout *gridLayout_4;
    WalletGui::WalletNormalGrayTextLabel *label_3;
    QDoubleSpinBox *m_feeSpin;
    WalletGui::ClearableLineEdit *m_paymentIdEdit;
    QHBoxLayout *horizontalLayout_3;
    WalletGui::WalletNormalGrayTextLabel *m_paymentIdTextLabel;
    QSpacerItem *horizontalSpacer_6;
    WalletGui::WalletTinyLinkLikeButton *m_generatePaymentIdButton;
    QSpacerItem *horizontalSpacer_5;
    QGridLayout *m_priorityGridLayout;
    QSlider *m_prioritySlider;
    QSpacerItem *horizontalSpacer_7;
    QFrame *m_mixinFrame;
    QGridLayout *gridLayout;
    QLabel *label;
    WalletGui::WalletExtraNormalBlackTextLabel *m_totalAmountLabel;
    QSpinBox *m_mixinSpin;
    QSpacerItem *horizontalSpacer;
    QSlider *m_mixinSlider;
    WalletGui::WalletLargeBlueButton *m_sendButton;
    WalletGui::WalletNormalGrayTextLabel *label_2;
    WalletGui::WalletNormalGrayTextLabel *m_mixinTextLabel;
    QSpacerItem *horizontalSpacer_4;

    void setupUi(QFrame *SendFrame)
    {
        if (SendFrame->objectName().isEmpty())
            SendFrame->setObjectName(QStringLiteral("SendFrame"));
        SendFrame->resize(866, 638);
        SendFrame->setFrameShape(QFrame::NoFrame);
        SendFrame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(SendFrame);
        verticalLayout->setSpacing(5);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        m_sendScrollarea = new WalletGui::ResizableScrollArea(SendFrame);
        m_sendScrollarea->setObjectName(QStringLiteral("m_sendScrollarea"));
        m_sendScrollarea->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(m_sendScrollarea->sizePolicy().hasHeightForWidth());
        m_sendScrollarea->setSizePolicy(sizePolicy);
        m_sendScrollarea->setAutoFillBackground(false);
        m_sendScrollarea->setStyleSheet(QStringLiteral(""));
        m_sendScrollarea->setFrameShape(QFrame::NoFrame);
        m_sendScrollarea->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        m_sendScrollarea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 866, 69));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(scrollAreaWidgetContents->sizePolicy().hasHeightForWidth());
        scrollAreaWidgetContents->setSizePolicy(sizePolicy1);
        scrollAreaWidgetContents->setStyleSheet(QStringLiteral(""));
        m_transfersLayout = new QVBoxLayout(scrollAreaWidgetContents);
        m_transfersLayout->setSpacing(0);
        m_transfersLayout->setObjectName(QStringLiteral("m_transfersLayout"));
        m_transfersLayout->setSizeConstraint(QLayout::SetNoConstraint);
        m_transfersLayout->setContentsMargins(0, 0, 0, 0);
        m_sendScrollarea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(m_sendScrollarea);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(25, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        m_addRecipientButton = new WalletGui::WalletNormalLinkLikeButton(SendFrame);
        m_addRecipientButton->setObjectName(QStringLiteral("m_addRecipientButton"));
        m_addRecipientButton->setCursor(QCursor(Qt::PointingHandCursor));
        m_addRecipientButton->setFocusPolicy(Qt::NoFocus);
        m_addRecipientButton->setFlat(true);

        horizontalLayout_2->addWidget(m_addRecipientButton);

        horizontalSpacer_2 = new QSpacerItem(478, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout->addItem(verticalSpacer_2);

        m_sendFeeFrame = new QFrame(SendFrame);
        m_sendFeeFrame->setObjectName(QStringLiteral("m_sendFeeFrame"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(m_sendFeeFrame->sizePolicy().hasHeightForWidth());
        m_sendFeeFrame->setSizePolicy(sizePolicy2);
        m_sendFeeFrame->setFrameShape(QFrame::Box);
        m_sendFeeFrame->setFrameShadow(QFrame::Plain);
        gridLayout_4 = new QGridLayout(m_sendFeeFrame);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(25, 11, 25, 11);
        label_3 = new WalletGui::WalletNormalGrayTextLabel(m_sendFeeFrame);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_3, 0, 0, 1, 1);

        m_feeSpin = new QDoubleSpinBox(m_sendFeeFrame);
        m_feeSpin->setObjectName(QStringLiteral("m_feeSpin"));
        m_feeSpin->setEnabled(false);
        m_feeSpin->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        m_feeSpin->setSuffix(QStringLiteral("QWC"));
        m_feeSpin->setDecimals(12);
        m_feeSpin->setMinimum(0.0002);
        m_feeSpin->setMaximum(999);
        m_feeSpin->setSingleStep(0.01);
        m_feeSpin->setValue(0.01);

        gridLayout_4->addWidget(m_feeSpin, 0, 1, 1, 1);

        m_paymentIdEdit = new WalletGui::ClearableLineEdit(m_sendFeeFrame);
        m_paymentIdEdit->setObjectName(QStringLiteral("m_paymentIdEdit"));
        m_paymentIdEdit->setStyleSheet(QLatin1String("[errorState=\"true\"] {\n"
"  border-color: #ef3131;\n"
"}"));

        gridLayout_4->addWidget(m_paymentIdEdit, 1, 3, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        m_paymentIdTextLabel = new WalletGui::WalletNormalGrayTextLabel(m_sendFeeFrame);
        m_paymentIdTextLabel->setObjectName(QStringLiteral("m_paymentIdTextLabel"));
        sizePolicy2.setHeightForWidth(m_paymentIdTextLabel->sizePolicy().hasHeightForWidth());
        m_paymentIdTextLabel->setSizePolicy(sizePolicy2);
        m_paymentIdTextLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        m_paymentIdTextLabel->setMargin(0);
        m_paymentIdTextLabel->setIndent(0);

        horizontalLayout_3->addWidget(m_paymentIdTextLabel);

        horizontalSpacer_6 = new QSpacerItem(10, 10, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);

        m_generatePaymentIdButton = new WalletGui::WalletTinyLinkLikeButton(m_sendFeeFrame);
        m_generatePaymentIdButton->setObjectName(QStringLiteral("m_generatePaymentIdButton"));
        sizePolicy2.setHeightForWidth(m_generatePaymentIdButton->sizePolicy().hasHeightForWidth());
        m_generatePaymentIdButton->setSizePolicy(sizePolicy2);
        m_generatePaymentIdButton->setCursor(QCursor(Qt::PointingHandCursor));
        m_generatePaymentIdButton->setFocusPolicy(Qt::NoFocus);
        m_generatePaymentIdButton->setFlat(true);

        horizontalLayout_3->addWidget(m_generatePaymentIdButton);

        horizontalSpacer_5 = new QSpacerItem(40, 10, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);


        gridLayout_4->addLayout(horizontalLayout_3, 0, 3, 1, 1);

        m_priorityGridLayout = new QGridLayout();
        m_priorityGridLayout->setObjectName(QStringLiteral("m_priorityGridLayout"));
        m_prioritySlider = new QSlider(m_sendFeeFrame);
        m_prioritySlider->setObjectName(QStringLiteral("m_prioritySlider"));
        m_prioritySlider->setMinimum(1);
        m_prioritySlider->setMaximum(4);
        m_prioritySlider->setPageStep(1);
        m_prioritySlider->setValue(2);
        m_prioritySlider->setOrientation(Qt::Horizontal);

        m_priorityGridLayout->addWidget(m_prioritySlider, 0, 0, 1, 1);


        gridLayout_4->addLayout(m_priorityGridLayout, 1, 0, 1, 2);

        horizontalSpacer_7 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_7, 0, 2, 1, 1);


        verticalLayout->addWidget(m_sendFeeFrame);

        m_mixinFrame = new QFrame(SendFrame);
        m_mixinFrame->setObjectName(QStringLiteral("m_mixinFrame"));
        m_mixinFrame->setFrameShape(QFrame::NoFrame);
        m_mixinFrame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(m_mixinFrame);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(25, 11, 25, 23);
        label = new QLabel(m_mixinFrame);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 2, 2, 1);

        m_totalAmountLabel = new WalletGui::WalletExtraNormalBlackTextLabel(m_mixinFrame);
        m_totalAmountLabel->setObjectName(QStringLiteral("m_totalAmountLabel"));
        m_totalAmountLabel->setIndent(0);

        gridLayout->addWidget(m_totalAmountLabel, 0, 5, 2, 1);

        m_mixinSpin = new QSpinBox(m_mixinFrame);
        m_mixinSpin->setObjectName(QStringLiteral("m_mixinSpin"));
        m_mixinSpin->setMaximum(999999999);

        gridLayout->addWidget(m_mixinSpin, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(298, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 3, 2, 1);

        m_mixinSlider = new QSlider(m_mixinFrame);
        m_mixinSlider->setObjectName(QStringLiteral("m_mixinSlider"));
        m_mixinSlider->setMaximumSize(QSize(16777215, 16777215));
        m_mixinSlider->setMaximum(19);
        m_mixinSlider->setPageStep(1);
        m_mixinSlider->setValue(7);
        m_mixinSlider->setTracking(false);
        m_mixinSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(m_mixinSlider, 1, 0, 1, 2);

        m_sendButton = new WalletGui::WalletLargeBlueButton(m_mixinFrame);
        m_sendButton->setObjectName(QStringLiteral("m_sendButton"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(m_sendButton->sizePolicy().hasHeightForWidth());
        m_sendButton->setSizePolicy(sizePolicy3);
        m_sendButton->setMinimumSize(QSize(218, 40));
        m_sendButton->setMaximumSize(QSize(218, 40));
        m_sendButton->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(m_sendButton, 0, 7, 2, 1);

        label_2 = new WalletGui::WalletNormalGrayTextLabel(m_mixinFrame);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 0, 4, 2, 1);

        m_mixinTextLabel = new WalletGui::WalletNormalGrayTextLabel(m_mixinFrame);
        m_mixinTextLabel->setObjectName(QStringLiteral("m_mixinTextLabel"));

        gridLayout->addWidget(m_mixinTextLabel, 0, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 0, 6, 2, 1);


        verticalLayout->addWidget(m_mixinFrame);

        QWidget::setTabOrder(m_paymentIdEdit, m_mixinSlider);
        QWidget::setTabOrder(m_mixinSlider, m_sendScrollarea);

        retranslateUi(SendFrame);
        QObject::connect(m_sendButton, SIGNAL(clicked()), SendFrame, SLOT(sendClicked()));
        QObject::connect(m_mixinSlider, SIGNAL(valueChanged(int)), SendFrame, SLOT(mixinValueChanged(int)));
        QObject::connect(m_addRecipientButton, SIGNAL(clicked()), SendFrame, SLOT(addRecipientClicked()));
        QObject::connect(m_paymentIdEdit, SIGNAL(textChanged(QString)), SendFrame, SLOT(validatePaymentId(QString)));
        QObject::connect(m_mixinSpin, SIGNAL(valueChanged(int)), SendFrame, SLOT(mixinValueChanged(int)));
        QObject::connect(m_generatePaymentIdButton, SIGNAL(clicked()), SendFrame, SLOT(generatePaymentIdClicked()));
        QObject::connect(m_prioritySlider, SIGNAL(valueChanged(int)), SendFrame, SLOT(priorityValueChanged(int)));

        QMetaObject::connectSlotsByName(SendFrame);
    } // setupUi

    void retranslateUi(QFrame *SendFrame)
    {
        SendFrame->setWindowTitle(QApplication::translate("SendFrame", "Frame", nullptr));
        m_addRecipientButton->setText(QApplication::translate("SendFrame", "+ ADD RECIPIENT", nullptr));
        label_3->setText(QApplication::translate("SendFrame", "PRIORITY (FEE)", nullptr));
        m_paymentIdEdit->setPlaceholderText(QApplication::translate("SendFrame", "Payment identifier issued by payee (market, exchange or other entity)", nullptr));
        m_paymentIdTextLabel->setText(QApplication::translate("SendFrame", "PAYMENT ID", nullptr));
        m_generatePaymentIdButton->setText(QApplication::translate("SendFrame", "Generate", nullptr));
        label->setText(QString());
        m_totalAmountLabel->setText(QApplication::translate("SendFrame", "AMOUNT", nullptr));
        m_sendButton->setText(QApplication::translate("SendFrame", "Send", nullptr));
        label_2->setText(QApplication::translate("SendFrame", "TOTAL AMOUNT", nullptr));
        m_mixinTextLabel->setText(QApplication::translate("SendFrame", "ANONYMITY LEVEL", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SendFrame: public Ui_SendFrame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SENDFRAME_H
