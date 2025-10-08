#include "app.h"

// Variant 20

// sin^3.2(a-x)
// -------------
//   b + x^-1.7
// a > x, x > 0

int main()
{
	double a, b, x;

	printf("Enter a, b, x:");

	int ret = scanf("%lf %lf %lf", &a, &b, &x);

	if (ret != 3)
	{
		printf("Error! Cannot read 3 arguments but only %d\n", ret);
		return -1;
	}

	printf("\n");

	double t1 = sin(a - x);

	double t2 = pow(x, -1.7);

	double result = pow(t1, 3.2) / (b + t2);

	printf("sin^3.2(%.3f-%.3f)\n------------------------ = %.3f", a, x, result);
	
	printf("\n%.3f + %.3f^-1.7", b, x);

	return 0;
}
