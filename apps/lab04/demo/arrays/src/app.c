#include "app.h"

int main()
{
    {
        int a[] = { -1, 5, 2, 11, 7, -9, 14, 3 };
        int sz = sizeof(a) / sizeof(a[0]);

        int min, max;

        print_array_int(a, sz);

        search_min_max_int(a, sz, &min, &max);

        printf("\nMin = %d, Max = %d\n", min, max);

        select_sort_int(a, sz);

        print_array_int(a, sz);

        printf("\n");
    }
  
    return 0;
}


