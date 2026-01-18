#ifndef MATRIX_H
#define MATRIX_H

void* add(int r, int c, int *A, int *B);
void substract(int r, int c, int *A, int *B, int *R);
void product(int r1, int c1, int *A, int r2, int c2, int *B, int *R);
void Tr(int r, int c, int *A, int *R);
void Det(int n, int *A, int *R);

#endif
