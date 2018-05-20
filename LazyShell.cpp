#include "LazyShell.h"

#include <QDesktopWidget>

LazyShell::LazyShell(QWidget *parent)
    : QWidget(parent)
{
    header_layout_ = new QVBoxLayout(this);
    QAction *action;

    QMenuBar *menu_bar = new QMenuBar(this);
    QMenu *file_menu = new QMenu(tr("&File"), this);
    action = new QAction(tr("&New"));
    action->setShortcut(tr("CTRL+N"));
    file_menu->addAction(action);
    action = new QAction(tr("&Open"));
    action->setShortcut(tr("CTRL+O"));
    file_menu->addAction(action);

    menu_bar->addMenu(file_menu);

    QLineEdit *addr_edit = new QLineEdit();
    menu_bar->setCornerWidget(addr_edit, Qt::TopRightCorner);

    //QToolBar *tool_bar = new QToolBar(this);
    //tool_bar->addWidget(addr_edit);

    header_layout_->setMenuBar(menu_bar);
    //header_layout_->addLayout(tool_bar);

    setLayout(header_layout_);
    resize(QDesktopWidget().availableGeometry(this).size() * 0.2);
}
