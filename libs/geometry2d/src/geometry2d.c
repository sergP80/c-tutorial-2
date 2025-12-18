#include "geometry2d.h"
#include <math.h>

/*
	struct P {
		int x;
		int y;
	};

	struct P p0;

	struct P* pp0 = &p0;

	(*pp0).x = 1;

	pp0->x
*/

double distance(PPOINT2D p1, PPOINT2D p2)
{
	double dx = p1->x - p2->x;

	double dy = p1->y - p2->y;

	
	return sqrt(dx * dx + dy*dy);
}

int v_sum(PVECTOR2D result, PVECTOR2D v1, PVECTOR2D v2)
{
	(result->start).x = (v1->start).x + (v2->start).x;

	(result->start).y = (v1->start).y + (v2->start).y;

	(result->end).x = (v1->end).x + (v2->end).x;

	(result->end).y = (v1->end).y + (v2->end).y;

	return 0;
}
