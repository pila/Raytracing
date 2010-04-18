#ifndef MALENKL_H
#define MALENKL_H

#include <QWidget>

class malenKl : public QWidget{
	Q_OBJECT

	public:
		malenKl();

	protected:	
		void paintEvent( QPaintEvent *event);
};

#endif
