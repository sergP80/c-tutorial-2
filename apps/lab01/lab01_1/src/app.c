#include "app.h"

/*
  Variant 20

 sin^3.2(a-x)
 -------------
 b + x^-1.7

 a = 7.23, b = 3.43, x = 5.22

 */

int main()
{
	double a = 7.23, b = 3.43, x = 5.22;

	double t1 = sin(a - x);

	double t2 = pow(x, -1.7);

	double result = pow(t1, 3.2) / (b + t2);

	printf("sin^3.2(%.3f-%.3f)\n------------------------ = %.3f", a, x, result);
	printf("\n%.3f + %.3f^-1.7", b, x);

	return 0;
}
