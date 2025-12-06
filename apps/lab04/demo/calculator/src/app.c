#include "app.h"

int main()
{
    double a, b;
   
    char op;

    printf("Type expression:");

    //a+b,a*b, a/b, a-b, a^b
    {
        int ret = scanf("%lf%c%lf", &a, &op, &b);

        if (ret < 3)
        {
            printf("Incorrect input. Received %d arguments whil required 3. Please try again later\n", ret);
            return -1;
        }
    }

    double result = compute(&a, &b, op);

    if (!isnan(result))
    {
        printf("%.3f%c%.3f=%.3f\n", a, op, b, result);
    }

    return 0;
}


