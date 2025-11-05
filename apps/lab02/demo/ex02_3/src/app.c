#include "app.h"

#ifdef _MSC_VER
  #include <float.h>
  #define isnan_compat(x) _isnan(x)
#else
  #define isnan_compat(x) isnan(x)
#endif

int main() {
    srand(time(NULL));

    int max_count = 100;

    double result = NAN, tol = 0.01;

    /*while (1) {
        int count = 0, success_count = 0, previous = -1;

        while (++count < max_count) {
            int dice = rand() % 6 + 1;

            if (dice == previous) {
                ++success_count;
            }

            previous = dice;

            ++count;
        }

        double probability = success_count * 100.0 / max_count;

        if (!isnanf(result) && fabs(result - probability) <= tol) {
            break;
        }

        result = probability;


        max_count *= 5;
    }*/

    for (;;) {
        int success_count = 0, previous = -1;

        for (int count = 0; count < max_count; ++count) {
            int dice = rand() % 6 + 1;

            if (dice == previous) {
                ++success_count;
            }

            previous = dice;
        }

        double probability = success_count * 100.0 / max_count;

        if (!isnan_compat(result) && fabs(result - probability) <= tol) {
            break;
        }

        result = probability;


        max_count *= 5;
    }

    printf("Probability = %.3f%% [%d, %.3f]\n", result, max_count, tol);

    return 0;
}
