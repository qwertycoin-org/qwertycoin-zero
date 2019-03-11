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

#include <QPainter>

#include "CopyColumnDelegate.h"
#include "CopyMagicLabel.h"
#include "WalletTreeView.h"

namespace WalletGui {

CopyColumnDelegate::CopyColumnDelegate(QObject* _parent) : QStyledItemDelegate(_parent) {
}

CopyColumnDelegate::~CopyColumnDelegate() {
}

void CopyColumnDelegate::paint(QPainter* _painter, const QStyleOptionViewItem& _option, const QModelIndex& _index) const {
  if (_index.isValid()) {
    QStyleOptionViewItem opt(_option);
    _painter->save();
    initStyleOption(&opt, _index  );
    _painter->setFont(opt.font);
    QFontMetrics fm(opt.font);
    QRect textRect = opt.widget->style()->subElementRect(QStyle::SE_ItemViewItemText, &opt, opt.widget);
    textRect.setBottomLeft(textRect.bottomLeft());
    QString elidedText = fm.elidedText(opt.text, opt.textElideMode, textRect.width());
    opt.widget->style()->drawPrimitive(QStyle::PE_PanelItemViewItem, &opt, _painter, opt.widget);
    _painter->setPen(opt.palette.color(QPalette::Text));
    opt.widget->style()->drawItemText(_painter, textRect, opt.displayAlignment, opt.palette, opt.state & QStyle::State_Enabled,
      elidedText);
    _painter->restore();
    return;
  }
}

QWidget* CopyColumnDelegate::createEditor(QWidget* _parent, const QStyleOptionViewItem& _option, const QModelIndex& _index) const {
  Q_UNUSED(_option);
  Q_UNUSED(_index);
  CopyMagicLabel* copyLabel = new CopyMagicLabel(_parent);
  copyLabel->setText(tr("Copied!"));
  copyLabel->adjustSize();
  const WalletTreeView* walletTreeView = qobject_cast<const WalletTreeView*>(_option.widget);
  if (walletTreeView != nullptr) {
    int row = _index.row();
    connect(walletTreeView, &WalletTreeView::copyableItemClickedSignal, [row, copyLabel](const QModelIndex& _clickedIndex) {
      if (_clickedIndex.row() == row) {
        copyLabel->start();
      }
    });
  }

  return copyLabel;
}

void CopyColumnDelegate::updateEditorGeometry(QWidget* _editor, const QStyleOptionViewItem& _option, const QModelIndex& _index) const {
  QRect editorRect(_editor->rect());
  QRect textRect = _option.widget->style()->subElementRect(QStyle::SE_ItemViewItemText, &_option, _option.widget);
  editorRect.moveBottom(_option.rect.bottom());
  editorRect.moveLeft(textRect.left());
  _editor->setGeometry(editorRect);
}

}
