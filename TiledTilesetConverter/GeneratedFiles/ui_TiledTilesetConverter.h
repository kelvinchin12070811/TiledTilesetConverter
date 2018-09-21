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
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TiledTilesetConverterClass
{
public:
    QAction *actionClose;
    QAction *actionAbout;
    QAction *actionAbout_Qt;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QTabWidget *mainTab;
    QWidget *convertTab;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *imageLabel;
    QLineEdit *lineEdit;
    QPushButton *browseButton;
    QLabel *imagePreview;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QLabel *codecLabel;
    QComboBox *codecList;
    QPushButton *previewButton;
    QPushButton *convertButton;
    QWidget *batchTab;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuHelp;

    void setupUi(QMainWindow *TiledTilesetConverterClass)
    {
        if (TiledTilesetConverterClass->objectName().isEmpty())
            TiledTilesetConverterClass->setObjectName(QStringLiteral("TiledTilesetConverterClass"));
        TiledTilesetConverterClass->resize(436, 270);
        actionClose = new QAction(TiledTilesetConverterClass);
        actionClose->setObjectName(QStringLiteral("actionClose"));
        actionAbout = new QAction(TiledTilesetConverterClass);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        actionAbout_Qt = new QAction(TiledTilesetConverterClass);
        actionAbout_Qt->setObjectName(QStringLiteral("actionAbout_Qt"));
        centralWidget = new QWidget(TiledTilesetConverterClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(4);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        mainTab = new QTabWidget(centralWidget);
        mainTab->setObjectName(QStringLiteral("mainTab"));
        convertTab = new QWidget();
        convertTab->setObjectName(QStringLiteral("convertTab"));
        verticalLayout_2 = new QVBoxLayout(convertTab);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        imageLabel = new QLabel(convertTab);
        imageLabel->setObjectName(QStringLiteral("imageLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(imageLabel->sizePolicy().hasHeightForWidth());
        imageLabel->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(imageLabel);

        lineEdit = new QLineEdit(convertTab);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(lineEdit);

        browseButton = new QPushButton(convertTab);
        browseButton->setObjectName(QStringLiteral("browseButton"));

        horizontalLayout->addWidget(browseButton);


        verticalLayout_2->addLayout(horizontalLayout);

        imagePreview = new QLabel(convertTab);
        imagePreview->setObjectName(QStringLiteral("imagePreview"));
        imagePreview->setMinimumSize(QSize(0, 135));
        imagePreview->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"border: 1px solid lightgrey;"));

        verticalLayout_2->addWidget(imagePreview);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        codecLabel = new QLabel(convertTab);
        codecLabel->setObjectName(QStringLiteral("codecLabel"));

        horizontalLayout_2->addWidget(codecLabel);

        codecList = new QComboBox(convertTab);
        codecList->setObjectName(QStringLiteral("codecList"));
        codecList->setMinimumSize(QSize(172, 0));

        horizontalLayout_2->addWidget(codecList);

        previewButton = new QPushButton(convertTab);
        previewButton->setObjectName(QStringLiteral("previewButton"));

        horizontalLayout_2->addWidget(previewButton);

        convertButton = new QPushButton(convertTab);
        convertButton->setObjectName(QStringLiteral("convertButton"));

        horizontalLayout_2->addWidget(convertButton);


        verticalLayout_2->addLayout(horizontalLayout_2);

        mainTab->addTab(convertTab, QString());
        batchTab = new QWidget();
        batchTab->setObjectName(QStringLiteral("batchTab"));
        mainTab->addTab(batchTab, QString());

        verticalLayout->addWidget(mainTab);

        TiledTilesetConverterClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(TiledTilesetConverterClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 436, 18));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        TiledTilesetConverterClass->setMenuBar(menuBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionClose);
        menuHelp->addAction(actionAbout);
        menuHelp->addAction(actionAbout_Qt);

        retranslateUi(TiledTilesetConverterClass);

        mainTab->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(TiledTilesetConverterClass);
    } // setupUi

    void retranslateUi(QMainWindow *TiledTilesetConverterClass)
    {
        TiledTilesetConverterClass->setWindowTitle(QApplication::translate("TiledTilesetConverterClass", "TiledTilesetConverter", nullptr));
        actionClose->setText(QApplication::translate("TiledTilesetConverterClass", "Close", nullptr));
#ifndef QT_NO_SHORTCUT
        actionClose->setShortcut(QApplication::translate("TiledTilesetConverterClass", "Ctrl+S", nullptr));
#endif // QT_NO_SHORTCUT
        actionAbout->setText(QApplication::translate("TiledTilesetConverterClass", "About", nullptr));
        actionAbout_Qt->setText(QApplication::translate("TiledTilesetConverterClass", "About Qt", nullptr));
        imageLabel->setText(QApplication::translate("TiledTilesetConverterClass", "Image", nullptr));
        browseButton->setText(QApplication::translate("TiledTilesetConverterClass", "browse", nullptr));
        imagePreview->setText(QString());
        codecLabel->setText(QApplication::translate("TiledTilesetConverterClass", "Convert from:", nullptr));
        previewButton->setText(QApplication::translate("TiledTilesetConverterClass", "preview", nullptr));
        convertButton->setText(QApplication::translate("TiledTilesetConverterClass", "Convert", nullptr));
        mainTab->setTabText(mainTab->indexOf(convertTab), QApplication::translate("TiledTilesetConverterClass", "Convert", nullptr));
        mainTab->setTabText(mainTab->indexOf(batchTab), QApplication::translate("TiledTilesetConverterClass", "Batch", nullptr));
        menuFile->setTitle(QApplication::translate("TiledTilesetConverterClass", "File", nullptr));
        menuHelp->setTitle(QApplication::translate("TiledTilesetConverterClass", "Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TiledTilesetConverterClass: public Ui_TiledTilesetConverterClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TILEDTILESETCONVERTER_H
