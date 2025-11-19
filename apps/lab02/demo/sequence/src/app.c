#include "app.h"

/**
 * n! = n * (n - 1)!
 * (2n+1)! = (2n+1)*(2n+1 -1)!=(2n+1)(2n)!
 *
 * a(n) = (-1)^n(2x)^2n/(2n)!
 *
 * a(n+1) = (-1)^(n+1)(2x)^2(n+1)/(2(n+1))!
 *
 * q(n)=a(n+1)/a(n) = [(-1)^(n+1)/(-1)^n][(2x)^2(n+1)/(2x)^2n][1/(2(n+1))!/1/(2n)!]
 *
 * <code>
 *  (-1)^(n+1)/(-1)^n=-(-1)^n/(-1)^n = -1
 *  (2x)^2(n+1)/(2x)^2n=(2x)^(2n+2)/(2x)^2n=2x^2n*(2x)^2/(2x)^(2n)=(2x)^2=4x^2
 *  1/(2(n+1))!/1/(2n)!=(2n)!/(2(n+1))!=(2n)!/(2n+2)!=(2n)!/((2n+2)(2n+1)(2n)!)=1/(2(n+1)(2n+1))
 *  q(n)=a(n+1)/a(n) = -4x^2/(2(n+1)(2n+1))
 *  a(n+1) = -2x^2/((n+1)(2n+1))* a(n)
 *  n = 1, a(1)=-4x^2/2=-2x^2
 * </code>
 */

#define SQR(x) ((x) * (x))

#define LAB02_1_VAR_19
// #define LAB02_1_VAR_25

#ifdef LAB02_1_VAR_19

#define COUNT 5
#define START_FROM 1
#define INIT_VALUE(x) (-2*SQR(x))

#define FUNC(x) (2 *(pow(cos(x), 2) - 1))

#define Q(x, n) (-2*SQR(x)/(((n)+1)*(2*(n)+1)))

#define RESULT(x, S) (S)

#else ifdef LAB02_1_VAR_25

#define COUNT 7
#define START_FROM 0

#define INIT_VALUE(x) 1.0

#define FUNC(x) (sin(sqrt(x)))

#define Q(x, n) (-(x)/2/((n)+1)/(2*n+3))

#define RESULT(x, S) (sqrt(x)*(S))
#endif

int main() {

  double x = 0.75;

  {
    double etalon = FUNC(x);

    printf("f(%.2f)=%.5f\n", x, etalon);
  }

  {
    double a = INIT_VALUE(x), S = a;

    int n;

    for (n = START_FROM; n <= COUNT; n++)
    {
      a *= Q(x, n);
      S += a;
    }

    S = RESULT(x, S);

    printf("S(%.2f)=%.5f\n", x, S);
  }

  return 0;
}