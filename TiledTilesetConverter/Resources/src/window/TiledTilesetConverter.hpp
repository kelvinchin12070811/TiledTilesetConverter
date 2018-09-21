#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_TiledTilesetConverter.h"

class TiledTilesetConverter : public QMainWindow
{
	Q_OBJECT

public:
	TiledTilesetConverter(QWidget *parent = Q_NULLPTR);

private:
	void connectItems();

private slots:
	void onActionCloseClicked();

private:
	Ui::TiledTilesetConverterClass ui;
};
