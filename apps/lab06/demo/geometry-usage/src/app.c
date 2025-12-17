#include "app.h"

int main()
{

    POINT2D p1 = { 2.16, 3.22 };

    POINT2D p2 = { -4.5, 7.55 };


    double dist1 = distance(&p1, &p2);

    printf("Distance: %.3f\n", dist1);

    return 0;
}


