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

void printMatrix(int r, int c, int *R)
{
    for (int i=0; i<r; i++) {
        for (int j=0; j<c; j++) {
            printf("%d \t", R[i * c + j]);
        }
        printf("\n");
    }   
}

int main()
{
    int r1,c1,r2,c2,mod=0;
    printf("0 --> Add \t 1 --> Substract\n");
    printf("2 --> Multiplication /t 3 --> Division\n");
    printf("4 --> Determinant /t 5 --> Transpose\n");
    printf("Chose an operator: ");
    scanf("%d", &mod);
    
    if (mod == 0) {
        int *A = getMatrix(&r1, &c1, 'A');
        int *B =  getMatrix(&r2, &c2, 'B');
        
        if (r1 == r2 && c1 == c2) {
            
            int *R = add(r1, c1, A, B);
            printMatrix(r1, c1, R);
            free(R);
            
        }
        free(A);
        free(B);
    }
    return 0;
}
