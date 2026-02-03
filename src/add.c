#include <stdlib.h>

void* add(int r, int c, int *A, int *B)
{   
    int *R = malloc(r * c * sizeof(int));

    if (R == NULL) return NULL; //Safety Check

    for (int i=0; i<r; i++) {
        for (int j=0; j<c; j++) {
            R[i * c + j] = A[i * c + j] + B[i * c + j];
        }
    }
    return R;
}
