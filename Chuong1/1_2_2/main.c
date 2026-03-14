/* main.c */
#include <stdio.h>
#include "operators.h"

int main() {
    int a = 15; 
    int b = 5;
    int q = 17;

    int z = add_mod(a, b, q);

    printf("Result = %d\n", z);
    return 0;
}