#include <QApplication>
#include <QPainter>
#include <QWidget>
#include <QColor>
#include "malenKl.h"
#include <QBrush>

int main(int argc, char* argv[]){
	QApplication app(argc, argv);
	malenKl* malen = new malenKl();
	malen->show();
	return app.exec();
}
