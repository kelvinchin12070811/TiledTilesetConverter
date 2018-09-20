#include "window/TiledTilesetConverter.hpp"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication::setAttribute(Qt::ApplicationAttribute::AA_EnableHighDpiScaling);
	QApplication a(argc, argv);
	TiledTilesetConverter w;
	w.show();
	return a.exec();
}
