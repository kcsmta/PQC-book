#include <stdio.h>
#include "operators.h"

int main()
{
    int n = 4;
    int q = 17;

    /* f(x) = 2 + 5x + 8x^2 + 11x^3 + 4x^4 + 7x^5 */
    int f[8] = {2,5,8,11,4,7,0,0};

    int r[4];

    printf("Input polynomial coefficients (degree < 2n):\n");
    for(int i=0;i<2*n;i++)
        printf("%d ", f[i]);
    printf("\n\n");

    poly_reduce_negacyclic(r, f, n);

    printf("After negacyclic reduction (no mod q):\n");
    print_poly("r", r, n);

    poly_reduce_modq(r, n, q);

    printf("\nCanonical representation mod q:\n");
    print_poly("r", r, n);

    poly_center(r, n, q);

    printf("\nCentered representation:\n");
    print_poly("r", r, n);

    return 0;
}