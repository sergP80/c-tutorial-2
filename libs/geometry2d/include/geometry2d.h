#pragma once


typedef struct tagPoint2D {
	double x;
	double y;
} POINT2D, *PPOINT2D;


typedef struct tagVector2D {
	POINT2D start;
	POINT2D end;
} VECTOR2D, *PVECTOR2D;


double distance(PPOINT2D, PPOINT2D);

int v_sum(PVECTOR2D, PVECTOR2D, PVECTOR2D);

//int v_sub(PVECTOR2D, PVECTOR2D, PVECTOR2D);
//
//int v_number_mul(PVECTOR2D, PVECTOR2D, double);
//
//double v_scalar_product(PVECTOR2D, PVECTOR2D);
//
//double v_vector_product(PVECTOR2D, PVECTOR2D);

