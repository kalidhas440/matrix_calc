#include <stdio.h>
#include <stdlib.h>
#include "matrix.h"

void* getMatrix(int *r, int *c, char x)
{
    printf("Define Matrix %c \n", x);
    printf("Enter number of rows: ");
    scanf("%d", r);
    printf("Enter number of columns: ");
    scanf("%d", c);
    
    int *matrix = malloc((*r) * (*c) * sizeof(int));
    
    for (int i=0; i<*r; i++) {
        for (int j=0; j<*c; j++) {
        printf("Enter element [%d][%d]: ", i+1, j+1);
        scanf("%d", &matrix[i * (*c) + j]);
        }
    }
    return matrix;
}

void printMatrix(int r, int c, int *R, char x)
{
    printf("Result of A %c B\n", x);
    for (int i=0; i<r; i++) {
        for (int j=0; j<c; j++) {
            printf("%d \t", R[i * c + j]);
        }
        printf("\n");
    }   
}

int main()
{   
    char x;
    int r1,c1,r2,c2,mode=0;
    int *A, *B, *R = NULL;
    printf("0 --> Add \t 1 --> Substract\n");
    printf("2 --> Multiplication /t 3 --> Division\n");
    printf("4 --> Determinant /t 5 --> Transpose\n");
    printf("Chose an operator: ");
    scanf("%d", &mode);
    
    if (mode == 0 || mode == 1) {
        A = getMatrix(&r1, &c1, 'A');
        B = getMatrix(&r2, &c2, 'B');
        
        if (r1 == r2 && c1 == c2) {
            if ( mode == 0 ) {
                R = add(r1, c1, A, B);
                x = '+';
            } else {
                R = substract(r1, r2, A, B);
                x = '-';
            }
            printMatrix(r1, c1, R, x);
        } else {
            printf("Number of columns or rows mismatch. Try again......\n");
        }
    }



    free(A);
    free(B);
    free(R);
    return 0;
}
