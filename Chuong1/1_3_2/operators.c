/* operators.c */
#include "operators.h"

#include <stdio.h>
#include "operators.h"

void poly_reduce_negacyclic(int *r, int *f, int n)
{
    for (int i = 0; i < n; i++)
        r[i] = f[i];

    for (int i = n; i < 2*n; i++)
        r[i - n] -= f[i];
}

void poly_reduce_modq(int *r, int n, int q)
{
    for (int i = 0; i < n; i++) {
        r[i] %= q;
        if (r[i] < 0)
            r[i] += q;
    }
}

void poly_center(int *r, int n, int q)
{
    for (int i = 0; i < n; i++) {
        if (r[i] > q/2)
            r[i] -= q;
    }
}

void print_poly(const char *name, int *a, int n)
{
    printf("%s(x) = ", name);
    for (int i = 0; i < n; i++) {
        printf("%d", a[i]);
        if (i > 0) printf("x^%d", i);
        if (i != n-1) printf(" + ");
    }
    printf("\n");
}