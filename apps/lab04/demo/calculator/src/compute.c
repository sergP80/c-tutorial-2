#include "app.h"
#include "compute.h"
#include "operations.h"
#include <math.h>

static operation supported_funcs[] = { op_add, op_subs, op_mul, op_div, op_pow, op_sin, op_cos};

static char supported_ops[] = { '+', '-', '*', '/', '^', 's', 'c'};

static int suported_ops_count = sizeof(supported_ops) / sizeof(supported_ops[0]);

static int find_op_id(char key)
{

    for (int i = 0; i < suported_ops_count; ++i)
    {
        if (key == supported_ops[i])
        {
            return i;
        }
    }

    return -1;
}

static double compute_delegate_1(double* a, double* b, char op)
{
    double result = NAN;

    switch (op)
    {
    case '+':
        result = op_add(*a, *b);
        break;
    case '-':
        result = op_subs(*a, *b);
        break;
    case '*':
        result = op_mul(*a, *b);
        break;
    case '/':
        result = op_div(*a, *b);
        break;
    case '^':
        result = op_pow(*a, *b);
        break;
    default:
        printf("Unsupported operations %.3f%c%.3f\n", *a, op, *b);
    }

    return result;
}

static double compute_delegate_2(double* a, double* b, char op)
{
    double result = NAN;

    int id = find_op_id(op);

    if (id < 0)
    {
        printf("Unsupported operations %.3f%c%.3f\n", *a, op, *b);
    }
    else {
        result = supported_funcs[id](*a, *b);
    }

    return result;
}

double compute(double* a, double* b, char op)
{
    return compute_delegate_2(a, b, op);
}
