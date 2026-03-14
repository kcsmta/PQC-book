/* main.c */
#include <stdio.h>
#include "operators.h"

int main() {
    int a = 14; 
    int q = 17;

    int z = center(a, q);

    printf("Result = %d\n", z);
    return 0;
}