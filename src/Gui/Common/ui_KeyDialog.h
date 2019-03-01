/********************************************************************************
** Form generated from reading UI file 'KeyDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KEYDIALOG_H
#define UI_KEYDIALOG_H

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
#include <QtWidgets/QTextEdit>
#include "Gui/Common/WalletBlueButton.h"
#include "Gui/Common/WalletCancelButton.h"
#include "Gui/Common/WalletOkButton.h"
#include "Gui/Common/WalletTextLabel.h"

QT_BEGIN_NAMESPACE

class Ui_KeyDialog
{
public:
    QGridLayout *gridLayout;
    QTextEdit *m_keyEdit;
    QSpacerItem *verticalSpacer_3;
    QLabel *m_spendKeyLabel;
    QLineEdit *m_spendKeyLineEdit;
    QLabel *m_viewKeyLabel;
    QLineEdit *m_viewKeyLineEdit;
    QSpacerItem *verticalSpacer;
    WalletGui::WalletSmallGrayTextLabel *m_descriptionLabel;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    WalletGui::WalletNormalBlueButton *m_fileButton;
    QSpacerItem *horizontalSpacer;
    WalletGui::WalletCancelButton *m_cancelButton;
    WalletGui::WalletOkButton *m_okButton;

    void setupUi(QDialog *KeyDialog)
    {
        if (KeyDialog->objectName().isEmpty())
            KeyDialog->setObjectName(QStringLiteral("KeyDialog"));
        KeyDialog->resize(585, 250);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(KeyDialog->sizePolicy().hasHeightForWidth());
        KeyDialog->setSizePolicy(sizePolicy);
        KeyDialog->setMinimumSize(QSize(585, 250));
        KeyDialog->setMaximumSize(QSize(585, 300));
        gridLayout = new QGridLayout(KeyDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        m_keyEdit = new QTextEdit(KeyDialog);
        m_keyEdit->setObjectName(QStringLiteral("m_keyEdit"));
        m_keyEdit->setMinimumSize(QSize(0, 80));
        m_keyEdit->setMaximumSize(QSize(16777215, 80));
        m_keyEdit->setFrameShape(QFrame::NoFrame);
        m_keyEdit->setReadOnly(false);

        gridLayout->addWidget(m_keyEdit, 0, 0, 1, 2);

        verticalSpacer_3 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 1, 0, 1, 1);

        m_spendKeyLabel = new QLabel(KeyDialog);
        m_spendKeyLabel->setObjectName(QStringLiteral("m_spendKeyLabel"));

        gridLayout->addWidget(m_spendKeyLabel, 2, 0, 1, 1);

        m_spendKeyLineEdit = new QLineEdit(KeyDialog);
        m_spendKeyLineEdit->setObjectName(QStringLiteral("m_spendKeyLineEdit"));
        m_spendKeyLineEdit->setReadOnly(false);

        gridLayout->addWidget(m_spendKeyLineEdit, 2, 1, 1, 1);

        m_viewKeyLabel = new QLabel(KeyDialog);
        m_viewKeyLabel->setObjectName(QStringLiteral("m_viewKeyLabel"));

        gridLayout->addWidget(m_viewKeyLabel, 3, 0, 1, 1);

        m_viewKeyLineEdit = new QLineEdit(KeyDialog);
        m_viewKeyLineEdit->setObjectName(QStringLiteral("m_viewKeyLineEdit"));
        m_viewKeyLineEdit->setReadOnly(false);

        gridLayout->addWidget(m_viewKeyLineEdit, 3, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 4, 0, 1, 1);

        m_descriptionLabel = new WalletGui::WalletSmallGrayTextLabel(KeyDialog);
        m_descriptionLabel->setObjectName(QStringLiteral("m_descriptionLabel"));
        m_descriptionLabel->setWordWrap(true);

        gridLayout->addWidget(m_descriptionLabel, 5, 0, 1, 2);

        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 6, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        m_fileButton = new WalletGui::WalletNormalBlueButton(KeyDialog);
        m_fileButton->setObjectName(QStringLiteral("m_fileButton"));
        m_fileButton->setMinimumSize(QSize(100, 0));

        horizontalLayout->addWidget(m_fileButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        m_cancelButton = new WalletGui::WalletCancelButton(KeyDialog);
        m_cancelButton->setObjectName(QStringLiteral("m_cancelButton"));

        horizontalLayout->addWidget(m_cancelButton);

        m_okButton = new WalletGui::WalletOkButton(KeyDialog);
        m_okButton->setObjectName(QStringLiteral("m_okButton"));

        horizontalLayout->addWidget(m_okButton);


        gridLayout->addLayout(horizontalLayout, 7, 0, 1, 2);


        retranslateUi(KeyDialog);
        QObject::connect(m_fileButton, SIGNAL(clicked()), KeyDialog, SLOT(fileClicked()));
        QObject::connect(m_okButton, SIGNAL(clicked()), KeyDialog, SLOT(accept()));
        QObject::connect(m_cancelButton, SIGNAL(clicked()), KeyDialog, SLOT(reject()));
        QObject::connect(m_keyEdit, SIGNAL(textChanged()), KeyDialog, SLOT(keyChanged()));
        QObject::connect(m_spendKeyLineEdit, SIGNAL(editingFinished()), KeyDialog, SLOT(keysChanged()));
        QObject::connect(m_viewKeyLineEdit, SIGNAL(editingFinished()), KeyDialog, SLOT(keysChanged()));

        QMetaObject::connectSlotsByName(KeyDialog);
    } // setupUi

    void retranslateUi(QDialog *KeyDialog)
    {
        KeyDialog->setWindowTitle(QApplication::translate("KeyDialog", "Key", nullptr));
        m_spendKeyLabel->setText(QApplication::translate("KeyDialog", "Spend Secret Key", nullptr));
        m_viewKeyLabel->setText(QApplication::translate("KeyDialog", "View Secret Key", nullptr));
        m_descriptionLabel->setText(QString());
        m_fileButton->setText(QApplication::translate("KeyDialog", "File", nullptr));
        m_cancelButton->setText(QApplication::translate("KeyDialog", "Cancel", nullptr));
        m_okButton->setText(QApplication::translate("KeyDialog", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class KeyDialog: public Ui_KeyDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KEYDIALOG_H
