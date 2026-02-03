#include <stdlib.h>

void* product(int r1, int c1, int *A, int c2, int *B )
{
    int *R = malloc(r1 * c2 * sizeof(int));

    if (R == NULL) return NULL; //Safety Check

    for (int i=0; i<r1; i++) {
        for (int j=0; j<c2; j++) {
            int sum = 0;
            for (int k=0; k<c1; k++) {
                sum += A[i * c1 + k] * B[k * c2 + j];
            }
            R[i* c2 + j] = sum;
        }
    }
    return R;
}