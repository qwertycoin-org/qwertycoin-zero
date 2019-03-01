/********************************************************************************
** Form generated from reading UI file 'QRCodeDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QRCODEDIALOG_H
#define UI_QRCODEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "Gui/Common/WalletOkButton.h"
#include "Gui/Common/QRLabel.h"

QT_BEGIN_NAMESPACE

class Ui_QRCodeDialog
{
public:
    QVBoxLayout *verticalLayout;
    WalletGui::QRLabel *m_qrCodeLabel;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    WalletGui::WalletOkButton *m_okButton;

    void setupUi(QDialog *QRCodeDialog)
    {
        if (QRCodeDialog->objectName().isEmpty())
            QRCodeDialog->setObjectName(QStringLiteral("QRCodeDialog"));
        QRCodeDialog->resize(322, 360);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QRCodeDialog->sizePolicy().hasHeightForWidth());
        QRCodeDialog->setSizePolicy(sizePolicy);
        QRCodeDialog->setMinimumSize(QSize(322, 360));
        QRCodeDialog->setMaximumSize(QSize(322, 360));
        verticalLayout = new QVBoxLayout(QRCodeDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        m_qrCodeLabel = new WalletGui::QRLabel(QRCodeDialog);
        m_qrCodeLabel->setObjectName(QStringLiteral("m_qrCodeLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(m_qrCodeLabel->sizePolicy().hasHeightForWidth());
        m_qrCodeLabel->setSizePolicy(sizePolicy1);
        m_qrCodeLabel->setMinimumSize(QSize(300, 300));
        m_qrCodeLabel->setMaximumSize(QSize(300, 300));

        verticalLayout->addWidget(m_qrCodeLabel);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        m_okButton = new WalletGui::WalletOkButton(QRCodeDialog);
        m_okButton->setObjectName(QStringLiteral("m_okButton"));

        horizontalLayout->addWidget(m_okButton);


        verticalLayout->addLayout(horizontalLayout);

        verticalLayout->setStretch(0, 1);

        retranslateUi(QRCodeDialog);
        QObject::connect(m_okButton, SIGNAL(clicked()), QRCodeDialog, SLOT(accept()));

        QMetaObject::connectSlotsByName(QRCodeDialog);
    } // setupUi

    void retranslateUi(QDialog *QRCodeDialog)
    {
        QRCodeDialog->setWindowTitle(QString());
        m_qrCodeLabel->setText(QString());
        m_okButton->setText(QApplication::translate("QRCodeDialog", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class QRCodeDialog: public Ui_QRCodeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QRCODEDIALOG_H
