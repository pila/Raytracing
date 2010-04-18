#ifndef RAY_H
#define RAY_H

#include <QVector>

class Ray{
	public:
	
	QVector<double> origin;
	QVector<double> direction;
	

	Ray(const QVector<double> &origin, const QVector<double> &direction);
	
	// Getter Methods
	QVector<double> getOrigin() const;
	QVector<double> getDirection() const;
	
	// Setter Methods
	void setOrigin(const QVector<double> &origin);
	void setDirection(const QVector<double> &direction);
};

#endif
