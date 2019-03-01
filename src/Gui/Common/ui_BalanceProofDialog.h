/********************************************************************************
** Form generated from reading UI file 'BalanceProofDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BALANCEPROOFDIALOG_H
#define UI_BALANCEPROOFDIALOG_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include "Gui/Common/WalletBlueButton.h"

QT_BEGIN_NAMESPACE

class Ui_BalanceProofDialog
{
public:
    QGridLayout *gridLayout;
    QDoubleSpinBox *m_amountSpin;
    QLabel *label_3;
    QLabel *label_2;
    QTextEdit *m_messageEdit;
    QTextEdit *m_signatureEdit;
    QHBoxLayout *m_proofHorizontalLayout;
    WalletGui::WalletNormalBlueButton *m_copyProofButton;
    WalletGui::WalletNormalBlueButton *m_saveProofButton;
    QSpacerItem *horizontalSpacer;
    WalletGui::WalletNormalBlueButton *m_proofCloseButton;
    QLabel *label;

    void setupUi(QDialog *BalanceProofDialog)
    {
        if (BalanceProofDialog->objectName().isEmpty())
            BalanceProofDialog->setObjectName(QStringLiteral("BalanceProofDialog"));
        BalanceProofDialog->resize(766, 446);
        BalanceProofDialog->setMinimumSize(QSize(600, 150));
        BalanceProofDialog->setMaximumSize(QSize(16777215, 16777215));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/cryptonote"), QSize(), QIcon::Normal, QIcon::Off);
        BalanceProofDialog->setWindowIcon(icon);
        gridLayout = new QGridLayout(BalanceProofDialog);
        gridLayout->setSpacing(5);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(25, 25, 25, 25);
        m_amountSpin = new QDoubleSpinBox(BalanceProofDialog);
        m_amountSpin->setObjectName(QStringLiteral("m_amountSpin"));
        m_amountSpin->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        m_amountSpin->setDecimals(12);
        m_amountSpin->setMinimum(0);
        m_amountSpin->setMaximum(1e+15);
        m_amountSpin->setValue(0);

        gridLayout->addWidget(m_amountSpin, 1, 0, 1, 1);

        label_3 = new QLabel(BalanceProofDialog);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 4, 0, 1, 1);

        label_2 = new QLabel(BalanceProofDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        m_messageEdit = new QTextEdit(BalanceProofDialog);
        m_messageEdit->setObjectName(QStringLiteral("m_messageEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(m_messageEdit->sizePolicy().hasHeightForWidth());
        m_messageEdit->setSizePolicy(sizePolicy);
        m_messageEdit->setMinimumSize(QSize(0, 100));
        m_messageEdit->setBaseSize(QSize(0, 0));
        m_messageEdit->setStyleSheet(QStringLiteral("background-color: white;"));

        gridLayout->addWidget(m_messageEdit, 3, 0, 1, 1);

        m_signatureEdit = new QTextEdit(BalanceProofDialog);
        m_signatureEdit->setObjectName(QStringLiteral("m_signatureEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(m_signatureEdit->sizePolicy().hasHeightForWidth());
        m_signatureEdit->setSizePolicy(sizePolicy1);
        m_signatureEdit->setMinimumSize(QSize(0, 25));
        m_signatureEdit->setBaseSize(QSize(0, 0));
        m_signatureEdit->setStyleSheet(QStringLiteral("background-color: white;"));
        m_signatureEdit->setReadOnly(true);

        gridLayout->addWidget(m_signatureEdit, 5, 0, 1, 1);

        m_proofHorizontalLayout = new QHBoxLayout();
        m_proofHorizontalLayout->setObjectName(QStringLiteral("m_proofHorizontalLayout"));
        m_copyProofButton = new WalletGui::WalletNormalBlueButton(BalanceProofDialog);
        m_copyProofButton->setObjectName(QStringLiteral("m_copyProofButton"));
        m_copyProofButton->setMinimumSize(QSize(100, 0));

        m_proofHorizontalLayout->addWidget(m_copyProofButton);

        m_saveProofButton = new WalletGui::WalletNormalBlueButton(BalanceProofDialog);
        m_saveProofButton->setObjectName(QStringLiteral("m_saveProofButton"));
        m_saveProofButton->setMinimumSize(QSize(100, 0));

        m_proofHorizontalLayout->addWidget(m_saveProofButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        m_proofHorizontalLayout->addItem(horizontalSpacer);

        m_proofCloseButton = new WalletGui::WalletNormalBlueButton(BalanceProofDialog);
        m_proofCloseButton->setObjectName(QStringLiteral("m_proofCloseButton"));
        m_proofCloseButton->setMinimumSize(QSize(100, 0));

        m_proofHorizontalLayout->addWidget(m_proofCloseButton);


        gridLayout->addLayout(m_proofHorizontalLayout, 6, 0, 1, 1);

        label = new QLabel(BalanceProofDialog);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);


        retranslateUi(BalanceProofDialog);
        QObject::connect(m_proofCloseButton, SIGNAL(clicked()), BalanceProofDialog, SLOT(accept()));
        QObject::connect(m_messageEdit, SIGNAL(textChanged()), BalanceProofDialog, SLOT(genProof()));
        QObject::connect(m_amountSpin, SIGNAL(valueChanged(double)), BalanceProofDialog, SLOT(genProof()));
        QObject::connect(m_copyProofButton, SIGNAL(clicked()), BalanceProofDialog, SLOT(copyProof()));
        QObject::connect(m_saveProofButton, SIGNAL(clicked()), BalanceProofDialog, SLOT(saveProof()));

        QMetaObject::connectSlotsByName(BalanceProofDialog);
    } // setupUi

    void retranslateUi(QDialog *BalanceProofDialog)
    {
        BalanceProofDialog->setWindowTitle(QApplication::translate("BalanceProofDialog", "Get proof of balance", nullptr));
        label_3->setText(QApplication::translate("BalanceProofDialog", "PROOF OF BALANCE", nullptr));
        label_2->setText(QApplication::translate("BalanceProofDialog", "MESSAGE", nullptr));
        m_copyProofButton->setText(QApplication::translate("BalanceProofDialog", "Copy", nullptr));
        m_saveProofButton->setText(QApplication::translate("BalanceProofDialog", "Save to file", nullptr));
        m_proofCloseButton->setText(QApplication::translate("BalanceProofDialog", "Close", nullptr));
        label->setText(QApplication::translate("BalanceProofDialog", "AMOUNT", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BalanceProofDialog: public Ui_BalanceProofDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BALANCEPROOFDIALOG_H
