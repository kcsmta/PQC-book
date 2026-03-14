/* main.c */
#include <stdio.h>
#include "operators.h"

int main() {
    int a = 19; // 19, -3 
    int q = 17;

    int z = mod(a, q);

    printf("Result = %d\n", z);
    return 0;
}