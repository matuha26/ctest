
#include <stdio.h>
#include <stdlib.h>
#include "myfunc.h"
#include <math.h>

int fibonachi(int num) {
    int prev = 1;
    int next = 1;

    if (num < 0)
        return 0;

    if (num <= 2)
        return num;

    int i = 2;
    while (i < num) {
        next += prev;
        prev = next - prev;
        i++;
    }

    return next;
}

double my_sqrt(double num) {
    if (num < 0) {
        return 0;
    }
    return sqrt(num);
}