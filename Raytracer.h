#ifndef RAYTRACER_H
#define RAYTRACER_H

#include <QVector>
#include "Ray.h"
#include "Kugel.h"

class Raytracer{	
	public:
	
	Raytracer();
	QVector<double> intersection(Ray* ray, const Kugel &kugel); 
};

#endif
