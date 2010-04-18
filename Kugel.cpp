#include "Kugel.h"
#include <QVector>

Kugel::Kugel(const QVector<double> &center, const QVector<double> &radius){
	this->center = center;
	this->radius = radius;
	this->color = Qt::red;
}

// Getter Methods

QVector<double> Kugel::getCenter() const{
	return center;
}

QVector<double> Kugel::getRadius() const{
	return radius;
}

//Setter Methods

void Kugel::setCenter(const QVector<double> &center){
	this->center = center;
}

void Kugel::setRadius(const QVector<double> &radius){
	this->radius = radius;
}
