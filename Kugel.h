#ifndef KUGEL_H
#define KUGEL_H

#include <QColor>
#include <QVector>

class Kugel{
	public:
	
	QVector<double> center;
	QVector<double> radius;
	QColor color;	

	
	Kugel(const QVector<double> &center, const QVector<double> &radius);

	// Getter Methods
	QVector<double> getCenter() const;
	QVector<double> getRadius() const;

	// Setter Methods
	void setCenter(const QVector<double> &center);
	void setRadius(const QVector<double> &radius);
};

#endif
