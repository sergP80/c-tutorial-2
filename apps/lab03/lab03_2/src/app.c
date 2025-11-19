#include "app.h"

#define MAX_SIZE 100

/*
* search item
* search min, max
* sort
* norm
* slice
*/
int main()
{
    printf("===================== Random value for array\n");

    {
        int array[MAX_SIZE];

        int sz = 20;

        srand(time(NULL));

        int min = -100, max = 200;

        for (int i = 0; i < sz; ++i)
        {
            array[i] = rand() % (max - min + 1) + min;
        }

        for (int i = 0; i < sz; ++i)
        {
            printf("a[%d]=%d\n", i, array[i]);
        }

        {
            printf("==================Search min, max\n");

            int min = array[0], max = min;

            for (int i = 1; i < sz; ++i)
            {
                if (array[i] < min)
                {
                    min = array[i];
                }
                else if (array[i] > max)
                {
                    max = array[i];
                }
            }

            printf("Min=%d, max=%d\n", min, max);
        }

        {
            printf("==================Search index of key\n");

            int index = -1, key = 51;

            for (int i = 0; i < sz; ++i)
            {
                if (array[i] == key)
                {
                    index = i;
                    break;
                }
            }

            if (index < 0)
            {
                printf("Key %d was not found\n", key);
            }
            else {
                printf("Key %d was found at %d\n", key, index);
            }

            
        }
    }


    return 0;
}
