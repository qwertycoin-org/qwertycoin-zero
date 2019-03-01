/********************************************************************************
** Form generated from reading UI file 'SignMessageDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNMESSAGEDIALOG_H
#define UI_SIGNMESSAGEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Gui/Common/WalletBlueButton.h"

QT_BEGIN_NAMESPACE

class Ui_SignMessageDialog
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    WalletGui::WalletNormalBlueButton *ClosePushButton;
    QTabWidget *m_tabWidget;
    QWidget *m_signTab;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QTextEdit *m_messageEdit;
    QLabel *label_3;
    QTextEdit *m_signatureEdit;
    QWidget *m_verifyTab;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QLabel *m_addressLabel;
    QLineEdit *m_addressEdit;
    QLabel *m_verifySignatureLabel;
    QTextEdit *m_verifySignatureEdit;
    QLabel *m_verifyMessageLabel;
    QTextEdit *m_verifyMessageEdit;
    QLabel *m_verificationResult;

    void setupUi(QDialog *SignMessageDialog)
    {
        if (SignMessageDialog->objectName().isEmpty())
            SignMessageDialog->setObjectName(QStringLiteral("SignMessageDialog"));
        SignMessageDialog->resize(862, 413);
        SignMessageDialog->setMinimumSize(QSize(600, 150));
        SignMessageDialog->setMaximumSize(QSize(16777215, 16777215));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/cryptonote"), QSize(), QIcon::Normal, QIcon::Off);
        SignMessageDialog->setWindowIcon(icon);
        gridLayout = new QGridLayout(SignMessageDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        ClosePushButton = new WalletGui::WalletNormalBlueButton(SignMessageDialog);
        ClosePushButton->setObjectName(QStringLiteral("ClosePushButton"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ClosePushButton->sizePolicy().hasHeightForWidth());
        ClosePushButton->setSizePolicy(sizePolicy);
        ClosePushButton->setMinimumSize(QSize(100, 0));

        horizontalLayout->addWidget(ClosePushButton);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        m_tabWidget = new QTabWidget(SignMessageDialog);
        m_tabWidget->setObjectName(QStringLiteral("m_tabWidget"));
        m_tabWidget->setAutoFillBackground(true);
        m_tabWidget->setStyleSheet(QStringLiteral(""));
        m_tabWidget->setDocumentMode(true);
        m_signTab = new QWidget();
        m_signTab->setObjectName(QStringLiteral("m_signTab"));
        m_signTab->setAutoFillBackground(false);
        m_signTab->setStyleSheet(QStringLiteral("background-color: transparent;"));
        verticalLayout_2 = new QVBoxLayout(m_signTab);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 9, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_2 = new QLabel(m_signTab);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        m_messageEdit = new QTextEdit(m_signTab);
        m_messageEdit->setObjectName(QStringLiteral("m_messageEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(m_messageEdit->sizePolicy().hasHeightForWidth());
        m_messageEdit->setSizePolicy(sizePolicy1);
        m_messageEdit->setMinimumSize(QSize(0, 100));
        m_messageEdit->setBaseSize(QSize(0, 0));
        m_messageEdit->setStyleSheet(QStringLiteral("background-color: white;"));

        verticalLayout->addWidget(m_messageEdit);

        label_3 = new QLabel(m_signTab);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        m_signatureEdit = new QTextEdit(m_signTab);
        m_signatureEdit->setObjectName(QStringLiteral("m_signatureEdit"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(m_signatureEdit->sizePolicy().hasHeightForWidth());
        m_signatureEdit->setSizePolicy(sizePolicy2);
        m_signatureEdit->setMinimumSize(QSize(0, 25));
        m_signatureEdit->setBaseSize(QSize(0, 0));
        m_signatureEdit->setStyleSheet(QStringLiteral("background-color: white;"));
        m_signatureEdit->setReadOnly(true);

        verticalLayout->addWidget(m_signatureEdit);


        verticalLayout_2->addLayout(verticalLayout);

        m_tabWidget->addTab(m_signTab, QString());
        m_verifyTab = new QWidget();
        m_verifyTab->setObjectName(QStringLiteral("m_verifyTab"));
        m_verifyTab->setAutoFillBackground(false);
        m_verifyTab->setStyleSheet(QStringLiteral("background-color: transparent;"));
        verticalLayout_4 = new QVBoxLayout(m_verifyTab);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, -1, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        m_addressLabel = new QLabel(m_verifyTab);
        m_addressLabel->setObjectName(QStringLiteral("m_addressLabel"));

        verticalLayout_3->addWidget(m_addressLabel);

        m_addressEdit = new QLineEdit(m_verifyTab);
        m_addressEdit->setObjectName(QStringLiteral("m_addressEdit"));
        m_addressEdit->setStyleSheet(QStringLiteral("background-color: white;"));

        verticalLayout_3->addWidget(m_addressEdit);

        m_verifySignatureLabel = new QLabel(m_verifyTab);
        m_verifySignatureLabel->setObjectName(QStringLiteral("m_verifySignatureLabel"));

        verticalLayout_3->addWidget(m_verifySignatureLabel);

        m_verifySignatureEdit = new QTextEdit(m_verifyTab);
        m_verifySignatureEdit->setObjectName(QStringLiteral("m_verifySignatureEdit"));
        m_verifySignatureEdit->setMinimumSize(QSize(0, 25));
        m_verifySignatureEdit->setStyleSheet(QStringLiteral("background-color: white;"));

        verticalLayout_3->addWidget(m_verifySignatureEdit);

        m_verifyMessageLabel = new QLabel(m_verifyTab);
        m_verifyMessageLabel->setObjectName(QStringLiteral("m_verifyMessageLabel"));

        verticalLayout_3->addWidget(m_verifyMessageLabel);

        m_verifyMessageEdit = new QTextEdit(m_verifyTab);
        m_verifyMessageEdit->setObjectName(QStringLiteral("m_verifyMessageEdit"));
        m_verifyMessageEdit->setMinimumSize(QSize(0, 100));
        m_verifyMessageEdit->setStyleSheet(QStringLiteral("background-color: white;"));

        verticalLayout_3->addWidget(m_verifyMessageEdit);


        verticalLayout_4->addLayout(verticalLayout_3);

        m_verificationResult = new QLabel(m_verifyTab);
        m_verificationResult->setObjectName(QStringLiteral("m_verificationResult"));
        m_verificationResult->setMinimumSize(QSize(0, 24));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        m_verificationResult->setFont(font);

        verticalLayout_4->addWidget(m_verificationResult);

        m_tabWidget->addTab(m_verifyTab, QString());

        gridLayout->addWidget(m_tabWidget, 0, 0, 1, 1);


        retranslateUi(SignMessageDialog);
        QObject::connect(ClosePushButton, SIGNAL(clicked()), SignMessageDialog, SLOT(accept()));
        QObject::connect(m_messageEdit, SIGNAL(textChanged()), SignMessageDialog, SLOT(messageChanged()));
        QObject::connect(m_addressEdit, SIGNAL(textChanged(QString)), SignMessageDialog, SLOT(verifyMessage()));
        QObject::connect(m_verifySignatureEdit, SIGNAL(textChanged()), SignMessageDialog, SLOT(verifyMessage()));
        QObject::connect(m_verifyMessageEdit, SIGNAL(textChanged()), SignMessageDialog, SLOT(verifyMessage()));
        QObject::connect(m_tabWidget, SIGNAL(currentChanged(int)), SignMessageDialog, SLOT(changeTitle(int)));

        m_tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(SignMessageDialog);
    } // setupUi

    void retranslateUi(QDialog *SignMessageDialog)
    {
        SignMessageDialog->setWindowTitle(QApplication::translate("SignMessageDialog", "Sign or verify message", nullptr));
        ClosePushButton->setText(QApplication::translate("SignMessageDialog", "Close", nullptr));
        label_2->setText(QApplication::translate("SignMessageDialog", "MESSAGE", nullptr));
        label_3->setText(QApplication::translate("SignMessageDialog", "SIGNATURE", nullptr));
        m_tabWidget->setTabText(m_tabWidget->indexOf(m_signTab), QApplication::translate("SignMessageDialog", "Sign message", nullptr));
        m_addressLabel->setText(QApplication::translate("SignMessageDialog", "ADDRESS", nullptr));
        m_verifySignatureLabel->setText(QApplication::translate("SignMessageDialog", "SIGNATURE", nullptr));
        m_verifyMessageLabel->setText(QApplication::translate("SignMessageDialog", "MESSAGE", nullptr));
        m_verificationResult->setText(QString());
        m_tabWidget->setTabText(m_tabWidget->indexOf(m_verifyTab), QApplication::translate("SignMessageDialog", "Verify message", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SignMessageDialog: public Ui_SignMessageDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNMESSAGEDIALOG_H
