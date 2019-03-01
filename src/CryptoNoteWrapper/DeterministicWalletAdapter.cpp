// Copyright (c) 2016-2017, The Qwertycoin developers
//
// This file is part of Qwertycoin.
//
// Qwertycoin is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// Qwertycoin is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with Qwertycoin.  If not, see <http://www.gnu.org/licenses/>.

#include <QDebug>
#include <QMessageBox>
#include "WalletLogger/WalletLogger.h"
#include "CryptoNoteWrapper/DeterministicWalletAdapter.h"
#include "crypto/crypto.h"
extern "C"
{
#include "crypto/keccak.h"
#include "crypto/crypto-ops.h"
}

namespace WalletGui {

DeterministicWalletAdapter::DeterministicWalletAdapter(QObject *parent) :
    QObject(parent)
{
}

DeterministicWalletAdapter::~DeterministicWalletAdapter() {
}

AccountKeys DeterministicWalletAdapter::generateDeterministicKeys() {
  AccountKeys keys;
  Crypto::SecretKey second;
  WalletLogger::info(tr("[Deterministic Wallet Adapter] Generating deterministic keys..."));
  try {
    Crypto::generate_keys(keys.spendKeys.publicKey, keys.spendKeys.secretKey);
    keccak((uint8_t *)&keys.spendKeys.secretKey, sizeof(Crypto::SecretKey), (uint8_t *)&second, sizeof(Crypto::SecretKey));
    Crypto::generate_deterministic_keys(keys.viewKeys.publicKey, keys.viewKeys.secretKey, second);
  } catch (std::system_error&) {

  }
  return keys;
}

bool DeterministicWalletAdapter::isDeterministic(AccountKeys& _keys) const {
  Crypto::SecretKey second;
  keccak((uint8_t *)&_keys.spendKeys.secretKey, sizeof(Crypto::SecretKey), (uint8_t *)&second, sizeof(Crypto::SecretKey));
  sc_reduce32((uint8_t *)&second);
  bool keys_deterministic = memcmp(second.data,_keys.viewKeys.secretKey.data, sizeof(Crypto::SecretKey)) == 0;
  return keys_deterministic;
}

}
