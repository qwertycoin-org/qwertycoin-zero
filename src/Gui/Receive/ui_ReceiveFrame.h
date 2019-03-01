/********************************************************************************
** Form generated from reading UI file 'ReceiveFrame.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECEIVEFRAME_H
#define UI_RECEIVEFRAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include "Gui/Common/QRLabel.h"
#include "Gui/Common/WalletBlueButton.h"
#include "Gui/Common/WalletLinkLikeButton.h"
#include "Gui/Common/WalletTextLabel.h"

QT_BEGIN_NAMESPACE

class Ui_ReceiveFrame
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QFrame *m_createRequestFrame;
    QVBoxLayout *verticalLayout_5;
    WalletGui::WalletHeaderLabel *label;
    WalletGui::WalletNormalGrayTextLabel *amountLabel;
    QHBoxLayout *horizontalLayout_6;
    QDoubleSpinBox *m_amountRequestSpinBox;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    WalletGui::WalletNormalGrayTextLabel *paymentIdLabel;
    WalletGui::WalletNormalLinkLikeButton *m_generateIdButton;
    QSpacerItem *horizontalSpacer_4;
    QLineEdit *m_paymentIdRequestEdit;
    WalletGui::WalletNormalGrayTextLabel *labelLabel;
    QLineEdit *m_labelEdit;
    WalletGui::WalletHeaderLabel *label_2;
    QTextEdit *m_requestTextEdit;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_7;
    WalletGui::QRLabel *m_qrCodeRequestLabel;
    QSpacerItem *verticalSpacer;
    QFrame *m_receiveFrameButtons;
    QHBoxLayout *m_receiveFrameButtonsLayout;
    QSpacerItem *horizontalSpacer;
    WalletGui::WalletNormalBlueButton *m_copyToClipBoardButton;
    WalletGui::WalletNormalBlueButton *m_saveRequestButton;
    WalletGui::WalletNormalBlueButton *m_saveQrCodeButton;

    void setupUi(QFrame *ReceiveFrame)
    {
        if (ReceiveFrame->objectName().isEmpty())
            ReceiveFrame->setObjectName(QStringLiteral("ReceiveFrame"));
        ReceiveFrame->resize(950, 627);
        ReceiveFrame->setFrameShape(QFrame::NoFrame);
        ReceiveFrame->setFrameShadow(QFrame::Plain);
        verticalLayout = new QVBoxLayout(ReceiveFrame);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(-1, 9, -1, 9);
        m_createRequestFrame = new QFrame(ReceiveFrame);
        m_createRequestFrame->setObjectName(QStringLiteral("m_createRequestFrame"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(m_createRequestFrame->sizePolicy().hasHeightForWidth());
        m_createRequestFrame->setSizePolicy(sizePolicy);
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        m_createRequestFrame->setFont(font);
        verticalLayout_5 = new QVBoxLayout(m_createRequestFrame);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(18, -1, 9, -1);
        label = new WalletGui::WalletHeaderLabel(m_createRequestFrame);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setMinimumSize(QSize(0, 13));
        label->setMargin(0);

        verticalLayout_5->addWidget(label);

        amountLabel = new WalletGui::WalletNormalGrayTextLabel(m_createRequestFrame);
        amountLabel->setObjectName(QStringLiteral("amountLabel"));

        verticalLayout_5->addWidget(amountLabel);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(-1, 0, -1, -1);
        m_amountRequestSpinBox = new QDoubleSpinBox(m_createRequestFrame);
        m_amountRequestSpinBox->setObjectName(QStringLiteral("m_amountRequestSpinBox"));
        m_amountRequestSpinBox->setDecimals(12);
        m_amountRequestSpinBox->setMaximum(1e+09);

        horizontalLayout_6->addWidget(m_amountRequestSpinBox);

        horizontalSpacer_2 = new QSpacerItem(299, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);


        verticalLayout_5->addLayout(horizontalLayout_6);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        paymentIdLabel = new WalletGui::WalletNormalGrayTextLabel(m_createRequestFrame);
        paymentIdLabel->setObjectName(QStringLiteral("paymentIdLabel"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(paymentIdLabel->sizePolicy().hasHeightForWidth());
        paymentIdLabel->setSizePolicy(sizePolicy2);

        horizontalLayout_3->addWidget(paymentIdLabel);

        m_generateIdButton = new WalletGui::WalletNormalLinkLikeButton(m_createRequestFrame);
        m_generateIdButton->setObjectName(QStringLiteral("m_generateIdButton"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(m_generateIdButton->sizePolicy().hasHeightForWidth());
        m_generateIdButton->setSizePolicy(sizePolicy3);
        m_generateIdButton->setMinimumSize(QSize(80, 0));
        m_generateIdButton->setFlat(true);

        horizontalLayout_3->addWidget(m_generateIdButton);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);


        verticalLayout_5->addLayout(horizontalLayout_3);

        m_paymentIdRequestEdit = new QLineEdit(m_createRequestFrame);
        m_paymentIdRequestEdit->setObjectName(QStringLiteral("m_paymentIdRequestEdit"));

        verticalLayout_5->addWidget(m_paymentIdRequestEdit);

        labelLabel = new WalletGui::WalletNormalGrayTextLabel(m_createRequestFrame);
        labelLabel->setObjectName(QStringLiteral("labelLabel"));

        verticalLayout_5->addWidget(labelLabel);

        m_labelEdit = new QLineEdit(m_createRequestFrame);
        m_labelEdit->setObjectName(QStringLiteral("m_labelEdit"));
        m_labelEdit->setMinimumSize(QSize(300, 0));

        verticalLayout_5->addWidget(m_labelEdit);

        label_2 = new WalletGui::WalletHeaderLabel(m_createRequestFrame);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        label_2->setMinimumSize(QSize(0, 13));
        label_2->setBaseSize(QSize(0, 13));
        label_2->setMargin(0);

        verticalLayout_5->addWidget(label_2);

        m_requestTextEdit = new QTextEdit(m_createRequestFrame);
        m_requestTextEdit->setObjectName(QStringLiteral("m_requestTextEdit"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(m_requestTextEdit->sizePolicy().hasHeightForWidth());
        m_requestTextEdit->setSizePolicy(sizePolicy4);
        m_requestTextEdit->setMinimumSize(QSize(300, 25));
        m_requestTextEdit->setMaximumSize(QSize(16777215, 60));
        m_requestTextEdit->setBaseSize(QSize(0, 100));
        m_requestTextEdit->setReadOnly(false);
        m_requestTextEdit->setAcceptRichText(false);

        verticalLayout_5->addWidget(m_requestTextEdit);

        verticalSpacer_2 = new QSpacerItem(20, 60, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_2);


        horizontalLayout_4->addWidget(m_createRequestFrame);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(9, 9, 18, 9);
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(-1, 0, -1, -1);
        m_qrCodeRequestLabel = new WalletGui::QRLabel(ReceiveFrame);
        m_qrCodeRequestLabel->setObjectName(QStringLiteral("m_qrCodeRequestLabel"));
        sizePolicy1.setHeightForWidth(m_qrCodeRequestLabel->sizePolicy().hasHeightForWidth());
        m_qrCodeRequestLabel->setSizePolicy(sizePolicy1);
        m_qrCodeRequestLabel->setMinimumSize(QSize(300, 300));

        horizontalLayout_7->addWidget(m_qrCodeRequestLabel);


        verticalLayout_4->addLayout(horizontalLayout_7);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);


        horizontalLayout_4->addLayout(verticalLayout_4);


        verticalLayout->addLayout(horizontalLayout_4);

        m_receiveFrameButtons = new QFrame(ReceiveFrame);
        m_receiveFrameButtons->setObjectName(QStringLiteral("m_receiveFrameButtons"));
        m_receiveFrameButtonsLayout = new QHBoxLayout(m_receiveFrameButtons);
        m_receiveFrameButtonsLayout->setObjectName(QStringLiteral("m_receiveFrameButtonsLayout"));
        m_receiveFrameButtonsLayout->setContentsMargins(18, 18, 18, 18);
        horizontalSpacer = new QSpacerItem(500, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        m_receiveFrameButtonsLayout->addItem(horizontalSpacer);

        m_copyToClipBoardButton = new WalletGui::WalletNormalBlueButton(m_receiveFrameButtons);
        m_copyToClipBoardButton->setObjectName(QStringLiteral("m_copyToClipBoardButton"));
        sizePolicy3.setHeightForWidth(m_copyToClipBoardButton->sizePolicy().hasHeightForWidth());
        m_copyToClipBoardButton->setSizePolicy(sizePolicy3);
        m_copyToClipBoardButton->setMinimumSize(QSize(150, 0));
        m_copyToClipBoardButton->setBaseSize(QSize(150, 0));
        m_copyToClipBoardButton->setFlat(true);

        m_receiveFrameButtonsLayout->addWidget(m_copyToClipBoardButton);

        m_saveRequestButton = new WalletGui::WalletNormalBlueButton(m_receiveFrameButtons);
        m_saveRequestButton->setObjectName(QStringLiteral("m_saveRequestButton"));
        sizePolicy3.setHeightForWidth(m_saveRequestButton->sizePolicy().hasHeightForWidth());
        m_saveRequestButton->setSizePolicy(sizePolicy3);
        m_saveRequestButton->setMinimumSize(QSize(150, 0));
        m_saveRequestButton->setBaseSize(QSize(150, 0));
        m_saveRequestButton->setFlat(true);

        m_receiveFrameButtonsLayout->addWidget(m_saveRequestButton);

        m_saveQrCodeButton = new WalletGui::WalletNormalBlueButton(m_receiveFrameButtons);
        m_saveQrCodeButton->setObjectName(QStringLiteral("m_saveQrCodeButton"));
        sizePolicy3.setHeightForWidth(m_saveQrCodeButton->sizePolicy().hasHeightForWidth());
        m_saveQrCodeButton->setSizePolicy(sizePolicy3);
        m_saveQrCodeButton->setMinimumSize(QSize(150, 0));
        m_saveQrCodeButton->setBaseSize(QSize(150, 0));
        m_saveQrCodeButton->setFlat(true);

        m_receiveFrameButtonsLayout->addWidget(m_saveQrCodeButton);


        verticalLayout->addWidget(m_receiveFrameButtons);

        QWidget::setTabOrder(m_amountRequestSpinBox, m_paymentIdRequestEdit);
        QWidget::setTabOrder(m_paymentIdRequestEdit, m_labelEdit);
        QWidget::setTabOrder(m_labelEdit, m_requestTextEdit);
        QWidget::setTabOrder(m_requestTextEdit, m_generateIdButton);
        QWidget::setTabOrder(m_generateIdButton, m_copyToClipBoardButton);
        QWidget::setTabOrder(m_copyToClipBoardButton, m_saveRequestButton);
        QWidget::setTabOrder(m_saveRequestButton, m_saveQrCodeButton);

        retranslateUi(ReceiveFrame);
        QObject::connect(m_amountRequestSpinBox, SIGNAL(editingFinished()), ReceiveFrame, SLOT(generateRequest()));
        QObject::connect(m_paymentIdRequestEdit, SIGNAL(editingFinished()), ReceiveFrame, SLOT(generateRequest()));
        QObject::connect(m_labelEdit, SIGNAL(editingFinished()), ReceiveFrame, SLOT(generateRequest()));
        QObject::connect(m_saveQrCodeButton, SIGNAL(clicked()), ReceiveFrame, SLOT(saveQrCode()));
        QObject::connect(m_saveRequestButton, SIGNAL(clicked()), ReceiveFrame, SLOT(saveRequest()));
        QObject::connect(m_copyToClipBoardButton, SIGNAL(clicked()), ReceiveFrame, SLOT(copyRequest()));
        QObject::connect(m_generateIdButton, SIGNAL(clicked()), ReceiveFrame, SLOT(generatePaymentIdClicked()));

        QMetaObject::connectSlotsByName(ReceiveFrame);
    } // setupUi

    void retranslateUi(QFrame *ReceiveFrame)
    {
        ReceiveFrame->setWindowTitle(QApplication::translate("ReceiveFrame", "Frame", 0));
        label->setText(QApplication::translate("ReceiveFrame", "Create request", 0));
        amountLabel->setText(QApplication::translate("ReceiveFrame", "AMOUNT", 0));
        paymentIdLabel->setText(QApplication::translate("ReceiveFrame", "PAYMENT ID", 0));
        m_generateIdButton->setText(QApplication::translate("ReceiveFrame", "Generate", 0));
        labelLabel->setText(QApplication::translate("ReceiveFrame", "LABEL", 0));
        label_2->setText(QApplication::translate("ReceiveFrame", "Payment request", 0));
        m_qrCodeRequestLabel->setText(QString());
        m_copyToClipBoardButton->setText(QApplication::translate("ReceiveFrame", "Copy to clipboard", 0));
        m_saveRequestButton->setText(QApplication::translate("ReceiveFrame", "Save Request", 0));
        m_saveQrCodeButton->setText(QApplication::translate("ReceiveFrame", "Save QR Code", 0));
    } // retranslateUi

};

namespace Ui {
    class ReceiveFrame: public Ui_ReceiveFrame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECEIVEFRAME_H
