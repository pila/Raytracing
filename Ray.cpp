#include "Ray.h"
#include <QVector>

Ray::Ray(const QVector<double> &origin, const QVector<double> &direction){
	this->origin = origin;
	this->direction = direction;
}

// Getter Methods

QVector<double> Ray::getOrigin() const{
	return this->origin;
}

QVector<double> Ray::getDirection() const{
	return this->direction;
}

// Setter Methods

void Ray::setOrigin(const QVector<double> &origin){
	this->origin = origin;
}

void Ray::setDirection(const QVector<double> &direction){
	this->direction = direction;
}

