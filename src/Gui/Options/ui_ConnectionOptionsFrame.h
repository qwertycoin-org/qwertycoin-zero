/********************************************************************************
** Form generated from reading UI file 'ConnectionOptionsFrame.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONNECTIONOPTIONSFRAME_H
#define UI_CONNECTIONOPTIONSFRAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Gui/Common/WalletBlueButton.h"
#include "Gui/Common/WalletTextLabel.h"

QT_BEGIN_NAMESPACE

class Ui_ConnectionOptionsFrame
{
public:
    QVBoxLayout *verticalLayout_5;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QRadioButton *m_autoRadio;
    WalletGui::WalletSmallGrayTextLabel *m_autoHelperLabel;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QRadioButton *m_localRadio;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpinBox *m_localPortSpin;
    QSpacerItem *horizontalSpacer_2;
    WalletGui::WalletSmallGrayTextLabel *m_localHelperLabel;
    QWidget *widget_4;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *m_remoteRadio;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_2;
    QComboBox *remoteNodesComboBox;
    QSpacerItem *horizontalSpacer_5;
    WalletGui::WalletNormalBlueButton *addNodeButton;
    WalletGui::WalletNormalBlueButton *removeNodeButton;
    QSpacerItem *horizontalSpacer_4;
    WalletGui::WalletSmallGrayTextLabel *m_remoteHelperLabel;
    WalletGui::WalletExtraNormalGrayTextLabel *label_4;
    QSpacerItem *verticalSpacer;
    QButtonGroup *m_connectionButtonGroup;

    void setupUi(QFrame *ConnectionOptionsFrame)
    {
        if (ConnectionOptionsFrame->objectName().isEmpty())
            ConnectionOptionsFrame->setObjectName(QStringLiteral("ConnectionOptionsFrame"));
        ConnectionOptionsFrame->resize(746, 396);
        ConnectionOptionsFrame->setFrameShape(QFrame::NoFrame);
        ConnectionOptionsFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_5 = new QVBoxLayout(ConnectionOptionsFrame);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(25, 40, 49, -1);
        widget = new QWidget(ConnectionOptionsFrame);
        widget->setObjectName(QStringLiteral("widget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        widget->setMinimumSize(QSize(0, 70));
        widget->setMaximumSize(QSize(16777215, 70));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(3);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        m_autoRadio = new QRadioButton(widget);
        m_connectionButtonGroup = new QButtonGroup(ConnectionOptionsFrame);
        m_connectionButtonGroup->setObjectName(QStringLiteral("m_connectionButtonGroup"));
        m_connectionButtonGroup->addButton(m_autoRadio);
        m_autoRadio->setObjectName(QStringLiteral("m_autoRadio"));

        verticalLayout->addWidget(m_autoRadio);

        m_autoHelperLabel = new WalletGui::WalletSmallGrayTextLabel(widget);
        m_autoHelperLabel->setObjectName(QStringLiteral("m_autoHelperLabel"));
        m_autoHelperLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        m_autoHelperLabel->setWordWrap(true);
        m_autoHelperLabel->setIndent(0);

        verticalLayout->addWidget(m_autoHelperLabel, 0, Qt::AlignTop);

        verticalLayout->setStretch(1, 1);

        verticalLayout_5->addWidget(widget);

        widget_3 = new QWidget(ConnectionOptionsFrame);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        sizePolicy.setHeightForWidth(widget_3->sizePolicy().hasHeightForWidth());
        widget_3->setSizePolicy(sizePolicy);
        widget_3->setMinimumSize(QSize(0, 70));
        widget_3->setMaximumSize(QSize(16777215, 70));
        verticalLayout_3 = new QVBoxLayout(widget_3);
        verticalLayout_3->setSpacing(3);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(10);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        m_localRadio = new QRadioButton(widget_3);
        m_connectionButtonGroup->addButton(m_localRadio);
        m_localRadio->setObjectName(QStringLiteral("m_localRadio"));

        horizontalLayout->addWidget(m_localRadio);

        horizontalSpacer = new QSpacerItem(37, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(widget_3);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        m_localPortSpin = new QSpinBox(widget_3);
        m_localPortSpin->setObjectName(QStringLiteral("m_localPortSpin"));
        m_localPortSpin->setEnabled(false);
        m_localPortSpin->setMinimum(1);
        m_localPortSpin->setMaximum(65535);
        m_localPortSpin->setValue(1);

        horizontalLayout->addWidget(m_localPortSpin, 0, Qt::AlignVCenter);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_3->addLayout(horizontalLayout);

        m_localHelperLabel = new WalletGui::WalletSmallGrayTextLabel(widget_3);
        m_localHelperLabel->setObjectName(QStringLiteral("m_localHelperLabel"));
        m_localHelperLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        m_localHelperLabel->setWordWrap(true);
        m_localHelperLabel->setIndent(0);

        verticalLayout_3->addWidget(m_localHelperLabel, 0, Qt::AlignTop);

        verticalLayout_3->setStretch(1, 1);

        verticalLayout_5->addWidget(widget_3);

        widget_4 = new QWidget(ConnectionOptionsFrame);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        sizePolicy.setHeightForWidth(widget_4->sizePolicy().hasHeightForWidth());
        widget_4->setSizePolicy(sizePolicy);
        widget_4->setMinimumSize(QSize(0, 70));
        widget_4->setMaximumSize(QSize(16777215, 70));
        verticalLayout_4 = new QVBoxLayout(widget_4);
        verticalLayout_4->setSpacing(3);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(10);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        m_remoteRadio = new QRadioButton(widget_4);
        m_connectionButtonGroup->addButton(m_remoteRadio);
        m_remoteRadio->setObjectName(QStringLiteral("m_remoteRadio"));

        horizontalLayout_2->addWidget(m_remoteRadio);

        horizontalSpacer_3 = new QSpacerItem(22, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        label_2 = new QLabel(widget_4);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        remoteNodesComboBox = new QComboBox(widget_4);
        remoteNodesComboBox->setObjectName(QStringLiteral("remoteNodesComboBox"));
        remoteNodesComboBox->setMinimumSize(QSize(200, 0));
        remoteNodesComboBox->setEditable(true);
        remoteNodesComboBox->setInsertPolicy(QComboBox::InsertAtTop);

        horizontalLayout_2->addWidget(remoteNodesComboBox);

        horizontalSpacer_5 = new QSpacerItem(15, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);

        addNodeButton = new WalletGui::WalletNormalBlueButton(widget_4);
        addNodeButton->setObjectName(QStringLiteral("addNodeButton"));
        sizePolicy.setHeightForWidth(addNodeButton->sizePolicy().hasHeightForWidth());
        addNodeButton->setSizePolicy(sizePolicy);
        addNodeButton->setMinimumSize(QSize(100, 0));
        addNodeButton->setBaseSize(QSize(150, 0));

        horizontalLayout_2->addWidget(addNodeButton);

        removeNodeButton = new WalletGui::WalletNormalBlueButton(widget_4);
        removeNodeButton->setObjectName(QStringLiteral("removeNodeButton"));
        sizePolicy.setHeightForWidth(removeNodeButton->sizePolicy().hasHeightForWidth());
        removeNodeButton->setSizePolicy(sizePolicy);
        removeNodeButton->setMinimumSize(QSize(100, 0));
        removeNodeButton->setBaseSize(QSize(150, 0));

        horizontalLayout_2->addWidget(removeNodeButton);

        horizontalSpacer_4 = new QSpacerItem(30, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout_4->addLayout(horizontalLayout_2);

        m_remoteHelperLabel = new WalletGui::WalletSmallGrayTextLabel(widget_4);
        m_remoteHelperLabel->setObjectName(QStringLiteral("m_remoteHelperLabel"));
        m_remoteHelperLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        m_remoteHelperLabel->setWordWrap(true);
        m_remoteHelperLabel->setIndent(0);

        verticalLayout_4->addWidget(m_remoteHelperLabel, 0, Qt::AlignTop);

        verticalLayout_4->setStretch(1, 1);

        verticalLayout_5->addWidget(widget_4);

        label_4 = new WalletGui::WalletExtraNormalGrayTextLabel(ConnectionOptionsFrame);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setWordWrap(true);

        verticalLayout_5->addWidget(label_4);

        verticalSpacer = new QSpacerItem(665, 61, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer);


        retranslateUi(ConnectionOptionsFrame);
        QObject::connect(m_connectionButtonGroup, SIGNAL(buttonClicked(int)), ConnectionOptionsFrame, SLOT(connectionButtonClicked(int)));
        QObject::connect(m_localRadio, SIGNAL(toggled(bool)), m_localPortSpin, SLOT(setEnabled(bool)));
        QObject::connect(addNodeButton, SIGNAL(clicked()), ConnectionOptionsFrame, SLOT(addNodeClicked()));
        QObject::connect(removeNodeButton, SIGNAL(clicked()), ConnectionOptionsFrame, SLOT(removeNodeClicked()));
        QObject::connect(remoteNodesComboBox, SIGNAL(editTextChanged(QString)), ConnectionOptionsFrame, SLOT(remoteNodesComboChanged(QString)));

        QMetaObject::connectSlotsByName(ConnectionOptionsFrame);
    } // setupUi

    void retranslateUi(QFrame *ConnectionOptionsFrame)
    {
        ConnectionOptionsFrame->setWindowTitle(QApplication::translate("ConnectionOptionsFrame", "Frame", nullptr));
        m_autoRadio->setText(QApplication::translate("ConnectionOptionsFrame", "Auto selection", nullptr));
        m_autoHelperLabel->setText(QApplication::translate("ConnectionOptionsFrame", "Wallet will connect to local Karbo daemon process on default port 8197. In case of no local daemon running it will use a random remote node.", nullptr));
        m_localRadio->setText(QApplication::translate("ConnectionOptionsFrame", "Local daemon", nullptr));
        label->setText(QApplication::translate("ConnectionOptionsFrame", "Port:", nullptr));
        m_localHelperLabel->setText(QApplication::translate("ConnectionOptionsFrame", "Wallet will connect to local Karbo daemon process. Please specify daemon's port.", nullptr));
        m_remoteRadio->setText(QApplication::translate("ConnectionOptionsFrame", "Remote daemon", nullptr));
        label_2->setText(QApplication::translate("ConnectionOptionsFrame", "Host:", nullptr));
        addNodeButton->setText(QApplication::translate("ConnectionOptionsFrame", "Add", nullptr));
        removeNodeButton->setText(QApplication::translate("ConnectionOptionsFrame", "Remove", nullptr));
        m_remoteHelperLabel->setText(QApplication::translate("ConnectionOptionsFrame", "Wallet will connect to Karbo node running on another PC in the local or global network. Please specify IP address or domain name and the port.", nullptr));
        label_4->setText(QApplication::translate("ConnectionOptionsFrame", "Wallet sends 0.25% fee from each transaction to the remote node it is connected to, but no more than 1 QWC.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConnectionOptionsFrame: public Ui_ConnectionOptionsFrame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONNECTIONOPTIONSFRAME_H
