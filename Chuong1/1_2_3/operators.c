/* operators.c */
#include "operators.h"

int center(int a, int q) {
    if (a>q/2)
        a-=q;
    return a;
}