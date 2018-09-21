#include <qmessagebox.h>
#include "TiledTilesetConverter.hpp"

TiledTilesetConverter::TiledTilesetConverter(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	connectItems();
}

void TiledTilesetConverter::onActionCloseClicked()
{
	this->close();
}

void TiledTilesetConverter::connectItems()
{
	connect(ui.actionAbout, &QAction::triggered, [this]() {
		QMessageBox::about(this, this->windowTitle(), tr("about this program"));
	});
	connect(ui.actionAbout_Qt, &QAction::triggered, [this]() {
		QMessageBox::aboutQt(this, this->windowTitle());
	});
	connect(ui.actionClose, &QAction::triggered, this, &TiledTilesetConverter::onActionCloseClicked);
}
