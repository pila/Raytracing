#include "malenKl.h"
#include <QWidget>
#include <QPainter>
#include <QColor>
#include <QBrush>
#include "Ray.h"
#include "Kugel.h"
#include "Raytracer.h"
#include <QVector>

malenKl::malenKl(){
	
}

void malenKl::paintEvent( QPaintEvent *event){
	int i,j;
	QPainter painter(this);

	QVector<double> origin, direction, center, radius, test;
	origin.append(0);
	origin.append(0);
	origin.append(0);	
	radius.append(150);
	direction.append(0);
	direction.append(0);
	direction.append(1);
	center.append(200);
	center.append(200);
	center.append(1);

	Kugel eineKugel(center, radius);
	Raytracer einTracer;

	for(i=0; i < 300; i++){
		for(j=0; j < 300; j++){
			origin.replace(0, i);
			origin.replace(1, j);
			origin.replace(2, 0);			
//			test.append(0);
			Ray* einRay = new Ray(origin, direction);
			test = einTracer.intersection(einRay, eineKugel);
			if(test.at(0) == 0){			
				painter.setBrush(QBrush(Qt::blue));
				painter.setPen(QPen(Qt::NoPen));
				painter.drawRect(i,j,1,1);
			}
			else{
				painter.setBrush(QBrush(Qt::red));
				painter.setPen(QPen(Qt::NoPen));
				painter.drawRect(i,j,1,1);
			}
			delete einRay;		
		}
	}
}
