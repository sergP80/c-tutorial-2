#include "app.h"

int main()
{
    double a = -M_PI, b = M_PI, h = 0.1, x;

    printf("x\t\ty\n");

    for (x = a; x <= b; x += h)
    {
        double y;

        if (x <= -M_PI / 2)
        {
            y = sin(2 * x) * cos(x / 2);
        }
        else if (x > -M_PI / 2 && x < M_PI / 2)
        {
            y = fabs(x - M_PI / 2);
        }
        else
        {
            y = (x - 1) / (2 + sqrt(x));
        }
        printf("%.3f\t%.3f\n", x, y);
    }

    return 0;
}
