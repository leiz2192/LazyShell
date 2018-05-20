#pragma once

#include <QtWidgets/QWidget>

#include <QVBoxLayout>
#include <QMenuBar>
#include <QMenu>
#include <QToolBar>
#include <QLineEdit>
#include <QTabWigdit>

class LazyShell : public QWidget
{
    Q_OBJECT

public:
    LazyShell(QWidget *parent = Q_NULLPTR);

private:
    QHBoxLayout *header_layout_;
};
