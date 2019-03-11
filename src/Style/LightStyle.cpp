// Copyright (c) 2015-2017, The Bytecoin developers
// Copyright (c) 2017-2018, The Karbo developers
// Copyright (c) 2019, The Qwertycoin developers
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

#include "LightStyle.h"

namespace WalletGui {

LightStyle::LightStyle() : Style("light", "Light") {

}

QString LightStyle::statusBarBackgroundColor() const {
  return "#CADEF7";
}

QString LightStyle::statusBarFontColor() const {
  return "#2A4268";
}

QString LightStyle::headerBackgroundColor() const {
  //return "#EDF4FC";
  return "#A9C1E0";
}

QString LightStyle::headerBorderColor() const {
  return "#9DB4D1";
}

QString LightStyle::addressFontColor() const {
  return "#15315E";
}

QString LightStyle::balanceFontColor() const {
  return "#2A4268";
}

QString LightStyle::toolButtonBackgroundColorNormal() const {
  return "#DFECFC";
}

QString LightStyle::toolButtonBackgroundColorHover() const {
  return "#C1D5ED";
}

QString LightStyle::toolButtonBackgroundColorPressed() const {
  return "#00A0E3";
}

QString LightStyle::toolButtonFontColorNormal() const {
  return "#2E4469";
}

QString LightStyle::toolButtonFontColorDisabled() const {
  return "#8C949E";
}

QString LightStyle::toolBarBorderColor() const {
  return "#9DB4D1";
}

QString LightStyle::getWalletSyncGifFile() const {
  return QString(":icons/light/wallet-sync");
}

QPixmap LightStyle::getLogoPixmap() const {
  return QPixmap(QString(":icons/light/logo"));
}

QPixmap LightStyle::getBalanceIcon() const {
  return QPixmap(QString(":icons/total_balance"));
}

QPixmap LightStyle::getConnectedIcon() const {
  return QPixmap(QString(":icons/light/connected"));
}

QPixmap LightStyle::getDisconnectedIcon() const {
  return QPixmap(QString(":icons/light/disconnected"));
}

QPixmap LightStyle::getEncryptedIcon() const {
  return QPixmap(QString(":icons/light/encrypted"));
}

QPixmap LightStyle::getNotEncryptedIcon() const {
  return QPixmap(QString(":icons/light/decrypted"));
}

QPixmap LightStyle::getSyncedIcon() const {
  return QPixmap(QString(":icons/light/synced"));
}

}
