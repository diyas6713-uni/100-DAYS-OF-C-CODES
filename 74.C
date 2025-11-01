//Find the transpose of a matrix
#include <stdio.h>
int main() 
{
    int R, C;
    printf("Enter the number of rows (R): ");
    scanf("%d", &R);
    printf("Enter the number of columns (C): ");
    scanf("%d", &C);

    int original[R][C];
    int transpose[C][R];

    printf("\nEnter the elements of the %d x %d matrix:\n", R, C);
    for (int i = 0; i < R; i++) 
    { 
        for (int j = 0; j < C; j++) 
        {
            printf("Enter element a[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &original[i][j]);
        }
    }

    for (int i = 0; i < R; i++) 
    { 
        for (int j = 0; j < C; j++) 
        {
            transpose[j][i] = original[i][j];
        }
    }
    
    printf("\n--- Original Matrix (%d x %d) ---\n", R, C);
    for (int i = 0; i < R; i++) 
    {
        for (int j = 0; j < C; j++) 
        {
            printf("%d\t", original[i][j]); 
        }
        printf("\n");
    }

    printf("\n--- Transposed Matrix (%d x %d) ---\n", C, R);
    for (int i = 0; i < C; i++) 
    { 
        for (int j = 0; j < R; j++) 
        {
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }
    return 0; 
}