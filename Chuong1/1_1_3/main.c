/* main.c */
#include <stdio.h>
#include "operators.h"

int main() {
    int x = 3;
    int y = 5;

    int z = add(x, y);

    printf("Result = %d\n", z);
    return 0;
}