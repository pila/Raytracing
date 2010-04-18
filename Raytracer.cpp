#include "Raytracer.h"
#include <math.h>
#include <QVector>

Raytracer::Raytracer(){

}

QVector<double> Raytracer::intersection(Ray* ray, const Kugel &kugel){
	
	// Intersection Kugel
	int i;
	int j;
	QVector<double> tmp;
	QVector<double> tmp2;
	QVector<double> quadGleichung;
	QVector<double> schnittpunkt;
	QVector<double> leer;
	
	leer.append(0);

	for(i = 0; i <= 2; i++){
		tmp.append(ray->origin.at(i) - kugel.center.at(i));
	}

	for(j = 0; j <= 2; j++){
 		tmp2.append(tmp.at(j) * tmp.at(j)); // x * k hoch 0
		if(ray->direction.at(j) <= 0){
			tmp2.append(-2 * tmp.at(j) * ray->direction.at(j)); // x * k hoch 1
		}
		else{
			tmp2.append(2 * tmp.at(j) * ray->direction.at(j)); // x * k hoch 1
		}
		tmp2.append(ray->direction.at(j) * ray->direction.at(j)); // x * k hoch 2
	}
	
	// folgende Quadratische Gleichung nun lösen

	for(i = 0; i <= 2; i++){
		if(i == 0){
			quadGleichung.append(tmp2.at(i) + tmp2.at(i+3) + tmp2.at(i+6) - (kugel.radius.at(0) * kugel.radius.at(0)));
		}
		else{
			quadGleichung.append(tmp2.at(i) + tmp2.at(i+3) + tmp2.at(i+6));
			// von x hoch 0 -> x hoch 2;
		} 
	}
	
	// Loesen der Qd Formel

	double d;
	double q;
	
	d = quadGleichung.at(1) * quadGleichung.at(1) -4 * quadGleichung.at(0) * quadGleichung.at(2);
	if(d < 0){
		return leer;
	}
	d = sqrt(d);
	
	if(quadGleichung.at(1) <= 0){
		q = -0.5 * (quadGleichung.at(1) * (-d)); 
	}
	else{
		q = -0.5 * (quadGleichung.at(1) * d);
	}
	
	// Die beiden Loesungen
	double x1, x2;
	x1 = q / quadGleichung.at(2);
	x2 = quadGleichung.at(0) / q;

	// tauschen - x1 soll kleinstes sein!
	if (x1 > x2)
	{
        	q = x2; x2 = x1; x1 = q;
	}

	// Schnittpunt ausrechnen.
	for(i = 0; i <= 2; i++){
		schnittpunkt.append(ray->origin.at(i) + x1 * ray->direction.at(i));
	}
	
	return schnittpunkt;
}
