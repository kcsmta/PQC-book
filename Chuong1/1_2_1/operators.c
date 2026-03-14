/* operators.c */
#include "operators.h"

int mod(int a, int q) {
    int r = a % q;
    if (r < 0) r += q;
    return r;
}