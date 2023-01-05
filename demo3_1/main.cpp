#include <stdio.h>
#include <stdlib.h>
#include "math/MathFunctions.h"

int main(int argc, char *argv[])
{
    double base = 2.0;
    int exponent = 3;
    if (argc < 3){
        printf("Usage: %s base exponent . use default value: base=2.0, exponent = 3\n", argv[0]);
    }
    else {
        base = atof(argv[1]);
        exponent = atoi(argv[2]);
    }
    double result = power(base, exponent);
    printf("%g ^ %d is %g\n", base, exponent, result);
    return 0;
}