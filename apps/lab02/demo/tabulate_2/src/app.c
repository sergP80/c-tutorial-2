#include "app.h"

int main()
{
    double a = 1.1, b = 3.0, hx = 0.25, c = 1.0, d = 2.0, hy = 0.15;

    double x, y, z;

    printf("y\\x");

    for (x = a; x <= b; x += hx)
    {
        printf("%.3f\t", x);
    }

    printf("\n");

    for (y = c; y <= d; y += hy)
    {

        printf("%.3f\t", y);

        for (x = a; x <= b; x += hx)
        {
            z = sqrt(x * (y + 1))/(x - y);
            printf("%.3f\t", z);
        }

        printf("\n");
    }

    return 0;
}
