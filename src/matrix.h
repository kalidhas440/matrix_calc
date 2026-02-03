#ifndef MATRIX_H
#define MATRIX_H

void* add(int r, int c, int *A, int *B);
void* substract(int r, int c, int *A, int *B);
void* product(int r1, int c1, int *A, int c2, int *B);
void* Tr(int r, int c, int *A);
void* Det(int n, int *A);

#endif
