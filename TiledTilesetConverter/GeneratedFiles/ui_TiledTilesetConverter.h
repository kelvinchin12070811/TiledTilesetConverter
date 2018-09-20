/********************************************************************************
** Form generated from reading UI file 'TiledTilesetConverter.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TILEDTILESETCONVERTER_H
#define UI_TILEDTILESETCONVERTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TiledTilesetConverterClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *TiledTilesetConverterClass)
    {
        if (TiledTilesetConverterClass->objectName().isEmpty())
            TiledTilesetConverterClass->setObjectName(QStringLiteral("TiledTilesetConverterClass"));
        TiledTilesetConverterClass->resize(600, 400);
        menuBar = new QMenuBar(TiledTilesetConverterClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        TiledTilesetConverterClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(TiledTilesetConverterClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        TiledTilesetConverterClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(TiledTilesetConverterClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        TiledTilesetConverterClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(TiledTilesetConverterClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        TiledTilesetConverterClass->setStatusBar(statusBar);

        retranslateUi(TiledTilesetConverterClass);

        QMetaObject::connectSlotsByName(TiledTilesetConverterClass);
    } // setupUi

    void retranslateUi(QMainWindow *TiledTilesetConverterClass)
    {
        TiledTilesetConverterClass->setWindowTitle(QApplication::translate("TiledTilesetConverterClass", "TiledTilesetConverter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TiledTilesetConverterClass: public Ui_TiledTilesetConverterClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TILEDTILESETCONVERTER_H
