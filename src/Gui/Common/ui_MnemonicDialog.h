/********************************************************************************
** Form generated from reading UI file 'MnemonicDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MNEMONICDIALOG_H
#define UI_MNEMONICDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "Gui/Common/WalletOkButton.h"
#include "Gui/Common/WalletTextLabel.h"

QT_BEGIN_NAMESPACE

class Ui_MnemonicDialog
{
public:
    QVBoxLayout *verticalLayout;
    WalletGui::WalletSmallGrayTextLabel *m_descriptionLabel;
    WalletGui::WalletExtraNormalBlackTextLabel *m_textLabel;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout;
    QLabel *m_languageLabel;
    QComboBox *m_languageCombo;
    QSpacerItem *horizontalSpacer;
    WalletGui::WalletOkButton *m_okButton;

    void setupUi(QDialog *MnemonicDialog)
    {
        if (MnemonicDialog->objectName().isEmpty())
            MnemonicDialog->setObjectName(QStringLiteral("MnemonicDialog"));
        MnemonicDialog->resize(500, 240);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MnemonicDialog->sizePolicy().hasHeightForWidth());
        MnemonicDialog->setSizePolicy(sizePolicy);
        MnemonicDialog->setMinimumSize(QSize(500, 200));
        MnemonicDialog->setMaximumSize(QSize(500, 300));
        verticalLayout = new QVBoxLayout(MnemonicDialog);
        verticalLayout->setSpacing(10);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(20, 20, 20, 20);
        m_descriptionLabel = new WalletGui::WalletSmallGrayTextLabel(MnemonicDialog);
        m_descriptionLabel->setObjectName(QStringLiteral("m_descriptionLabel"));
        m_descriptionLabel->setWordWrap(true);

        verticalLayout->addWidget(m_descriptionLabel);

        m_textLabel = new WalletGui::WalletExtraNormalBlackTextLabel(MnemonicDialog);
        m_textLabel->setObjectName(QStringLiteral("m_textLabel"));
        sizePolicy.setHeightForWidth(m_textLabel->sizePolicy().hasHeightForWidth());
        m_textLabel->setSizePolicy(sizePolicy);
        m_textLabel->setMinimumSize(QSize(0, 100));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        m_textLabel->setFont(font);
        m_textLabel->setFrameShape(QFrame::Box);
        m_textLabel->setFrameShadow(QFrame::Sunken);
        m_textLabel->setAlignment(Qt::AlignCenter);
        m_textLabel->setWordWrap(true);
        m_textLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        verticalLayout->addWidget(m_textLabel);

        verticalSpacer_3 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout->addItem(verticalSpacer_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        m_languageLabel = new QLabel(MnemonicDialog);
        m_languageLabel->setObjectName(QStringLiteral("m_languageLabel"));

        horizontalLayout->addWidget(m_languageLabel);

        m_languageCombo = new QComboBox(MnemonicDialog);
        m_languageCombo->setObjectName(QStringLiteral("m_languageCombo"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(m_languageCombo->sizePolicy().hasHeightForWidth());
        m_languageCombo->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(m_languageCombo);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        m_okButton = new WalletGui::WalletOkButton(MnemonicDialog);
        m_okButton->setObjectName(QStringLiteral("m_okButton"));

        horizontalLayout->addWidget(m_okButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(MnemonicDialog);
        QObject::connect(m_okButton, SIGNAL(clicked()), MnemonicDialog, SLOT(accept()));
        QObject::connect(m_languageCombo, SIGNAL(currentIndexChanged(QString)), MnemonicDialog, SLOT(languageChanged()));

        QMetaObject::connectSlotsByName(MnemonicDialog);
    } // setupUi

    void retranslateUi(QDialog *MnemonicDialog)
    {
        MnemonicDialog->setWindowTitle(QString());
        m_descriptionLabel->setText(QString());
        m_textLabel->setText(QString());
        m_languageLabel->setText(QApplication::translate("MnemonicDialog", "Select language", 0));
        m_okButton->setText(QApplication::translate("MnemonicDialog", "OK", 0));
    } // retranslateUi

};

namespace Ui {
    class MnemonicDialog: public Ui_MnemonicDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MNEMONICDIALOG_H