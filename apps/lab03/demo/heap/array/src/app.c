#include "app.h"

int main()
{
    int sz = 20;
    int * array = (int*) calloc(sz, sizeof(int));

    srand(time(NULL));

    for (int i = 0; i < sz; ++i)
    {
        *(array + i) = rand()%1001 - 500;
    }

    for (int i = 0; i < sz; ++i)
    {
        printf("%d\n", array[i]);
    }

    free(array);

    return 0;
}
