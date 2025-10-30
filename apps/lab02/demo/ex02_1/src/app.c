#include "app.h"

/*
  Variant 20

 */

int main()
{
    int min = 0, max = 0, num, count  = 0;

    printf("****************************************************************************************************\n");
    printf("This program read your input number and calculate min, max from the inputed sequence and difference\n");
    printf("To stop input and get result enter non-number character\n");
    printf("****************************************************************************************************\n");

    while (scanf("%d", &num) == 1)
    {
        if (count == 0) {
            min = max = num;
        } else {
            if (num < min) {
                min = num;
            } else if (num > max) {
                max = num;
            }
        }

        ++count;
    }

    /*int done = 0;

    do {
        done = scanf("%d", &num) != 1;

        if (!done) {
            if (count == 0) {
                min = max = num;
            } else {
                if (num < min) {
                    min = num;
                } else if (num > max) {
                    max = num;
                }
            }

            ++count;
        }

    } while (!done);*/

    printf("Minimum  is %d, maximum is %d, difference is %d\n", min, max, max - min);

	return 0;
}
