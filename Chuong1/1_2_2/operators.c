/* operators.c */
#include "operators.h"

int add_mod(int a, int b, int q) {
    int r = (a + b) % q;
    if (r < 0) r += q;
    return r;
}