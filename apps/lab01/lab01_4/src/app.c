#include "app.h"

// Variant 20

// sin^3.2(a-x)
// -------------
//   b + x^-1.7
// a > x, x > 0

#define PI 3.1415926

#define SIN(a, x) sin((a) - (x))
#define POW(x) pow((x), -1.7)

#define EXPR(x, a, b) pow(SIN(a, x), 3.2)/((b) + POW(x))

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

	double result = EXPR(x, a, b);

	printf("sin^3.2(%.3f-%.3f)\n------------------------ = %.3f", a, x, result);
	
	printf("\n%.3f + %.3f^-1.7", b, x);

	return 0;
}
