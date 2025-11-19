#include "app.h"

/**
* char
* int - short int (short), long int (long) , long long int (long long) C11
* float
* double, long double (C11)
* void
* 
* char*
* short*
* int*
* long*
* float*
* double*
* void*
*/

/*
* Arrays
* |####|
*               |####|
*   |####|
*               |####|
* 
* |####|####|####|####|####|
*/

#define MAX_SIZE 100
int main()
{
    //int a0 = -1, a1 = 3, a2 = 5, a3 = 2, a4 = 7;
    printf("===================== Declare and print simple array\n");

    {
        int arr2[5];

        arr2[0] = -1;
        arr2[1] = 3;
        arr2[2] = 5;
        arr2[3] = 2;
        arr2[4] = 7;
    }

    {
        char str[5] = { 'H', 'e', 'l', 'o' };// \0
        int arr2[6] = {-1, 3, 5, 2, 7};

        for (int i = 0; i < 6; ++i) {
            printf("%d\t", arr2[i]);
        }
        printf("\n");
    }

    printf("===================== Magic number of array\n");

    {
        char str[] = { 'H', 'e', 'l', 'l', 'o', ',', ' ', 'w', 'o', 'r', 'l', 'd', '!'};
        int arr2[] = { -1, 3, 5, 2, 7, 4, -5, 22, 13, 11, 17, 15, -4, 12 };

        printf("sizeof(str)=%d, sizeof(arr2)=%d\n", sizeof(str), sizeof(arr2));

        int sz = sizeof(arr2) / sizeof(arr2[0]);

        for (int i = 0; i < sz; ++i) {
            printf("%d\t", arr2[i]);
        }

        printf("\n");
        
        for (int i = 0; i < sizeof(str)/sizeof(str[0]); ++i) {
            printf("%c", str[i]);
        }

        printf("\n");
    }

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
    }


    return 0;
}
