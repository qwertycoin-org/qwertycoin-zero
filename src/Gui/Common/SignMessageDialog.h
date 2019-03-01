// Copyright (c) 2016-2017 The Karbowanec developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include <QDialog>
#include "CryptoNoteWrapper/CryptoNoteAdapter.h"
#include "CryptoNoteWrapper/WalletGreenAdapter.h"

namespace Ui {
class SignMessageDialog;
}

namespace WalletGui {

class SignMessageDialog : public QDialog {
    Q_OBJECT
    Q_DISABLE_COPY(SignMessageDialog)

public:
    SignMessageDialog(const AccountKeys& _keys, const QString& _address, QWidget * _parent);
    SignMessageDialog(QWidget *_parent);
    void sign();
    void verify();

    ~SignMessageDialog();

private:
    QString m_address;
    AccountKeys m_keys;
    bool m_verify;

    Q_SLOT void messageChanged();
    Q_SLOT void verifyMessage();
    Q_SLOT void changeTitle(int _variant);

    QScopedPointer<Ui::SignMessageDialog> m_ui;
};

}
