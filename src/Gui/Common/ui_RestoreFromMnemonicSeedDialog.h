/********************************************************************************
** Form generated from reading UI file 'RestoreFromMnemonicSeedDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESTOREFROMMNEMONICSEEDDIALOG_H
#define UI_RESTOREFROMMNEMONICSEEDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include "Gui/Common/WalletCancelButton.h"
#include "Gui/Common/WalletOkButton.h"

QT_BEGIN_NAMESPACE

class Ui_RestoreFromMnemonicSeedDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTextEdit *m_seedEdit;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QLabel *m_errorLabel;
    QSpacerItem *horizontalSpacer;
    WalletGui::WalletCancelButton *m_cancelButton;
    WalletGui::WalletOkButton *m_okButton;

    void setupUi(QDialog *RestoreFromMnemonicSeedDialog)
    {
        if (RestoreFromMnemonicSeedDialog->objectName().isEmpty())
            RestoreFromMnemonicSeedDialog->setObjectName(QStringLiteral("RestoreFromMnemonicSeedDialog"));
        RestoreFromMnemonicSeedDialog->resize(647, 202);
        RestoreFromMnemonicSeedDialog->setMinimumSize(QSize(0, 130));
        verticalLayout = new QVBoxLayout(RestoreFromMnemonicSeedDialog);
        verticalLayout->setSpacing(10);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(20, 20, 20, 20);
        label = new QLabel(RestoreFromMnemonicSeedDialog);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        m_seedEdit = new QTextEdit(RestoreFromMnemonicSeedDialog);
        m_seedEdit->setObjectName(QStringLiteral("m_seedEdit"));
        m_seedEdit->setReadOnly(false);

        verticalLayout->addWidget(m_seedEdit);

        verticalSpacer = new QSpacerItem(20, 2, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        m_errorLabel = new QLabel(RestoreFromMnemonicSeedDialog);
        m_errorLabel->setObjectName(QStringLiteral("m_errorLabel"));

        horizontalLayout->addWidget(m_errorLabel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        m_cancelButton = new WalletGui::WalletCancelButton(RestoreFromMnemonicSeedDialog);
        m_cancelButton->setObjectName(QStringLiteral("m_cancelButton"));
        m_cancelButton->setAutoDefault(false);

        horizontalLayout->addWidget(m_cancelButton);

        m_okButton = new WalletGui::WalletOkButton(RestoreFromMnemonicSeedDialog);
        m_okButton->setObjectName(QStringLiteral("m_okButton"));
        m_okButton->setAutoDefault(false);

        horizontalLayout->addWidget(m_okButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(RestoreFromMnemonicSeedDialog);
        QObject::connect(m_okButton, SIGNAL(clicked()), RestoreFromMnemonicSeedDialog, SLOT(accept()));
        QObject::connect(m_cancelButton, SIGNAL(clicked()), RestoreFromMnemonicSeedDialog, SLOT(reject()));
        QObject::connect(m_seedEdit, SIGNAL(textChanged()), RestoreFromMnemonicSeedDialog, SLOT(onTextChanged()));

        m_okButton->setDefault(true);


        QMetaObject::connectSlotsByName(RestoreFromMnemonicSeedDialog);
    } // setupUi

    void retranslateUi(QDialog *RestoreFromMnemonicSeedDialog)
    {
        RestoreFromMnemonicSeedDialog->setWindowTitle(QApplication::translate("RestoreFromMnemonicSeedDialog", "Restore from mnemonic phrase", 0));
        label->setText(QApplication::translate("RestoreFromMnemonicSeedDialog", "MNEMONIC", 0));
        m_errorLabel->setText(QString());
        m_cancelButton->setText(QApplication::translate("RestoreFromMnemonicSeedDialog", "Cancel", 0));
        m_okButton->setText(QApplication::translate("RestoreFromMnemonicSeedDialog", "OK", 0));
    } // retranslateUi

};

namespace Ui {
    class RestoreFromMnemonicSeedDialog: public Ui_RestoreFromMnemonicSeedDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESTOREFROMMNEMONICSEEDDIALOG_H