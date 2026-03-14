/* operators.h */
#ifndef OPERATORS_H
#define OPERATORS_H

void poly_reduce_negacyclic(int *r, int *f, int n);
void poly_reduce_modq(int *r, int n, int q);
void poly_center(int *r, int n, int q);
void print_poly(const char *name, int *a, int n);

#endif