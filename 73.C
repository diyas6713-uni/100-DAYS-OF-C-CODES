//Find the sum of each row of a matrix and store it in an array
#include <stdio.h>
int main() 
{
    int R, C;
    printf("Enter the number of rows: ");
    scanf("%d", &R);
    printf("Enter the number of columns: ");
    scanf("%d", &C);

    int matrix[R][C];
    int rowSums[R];

    printf("\nEnter the elements of the matrix:\n");
    for (int i = 0; i < R; i++) 
    { 
        for (int j = 0; j < C; j++) 
        {
            printf("Enter element a[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < R; i++) 
    { 
        int currentSum = 0;
        for (int j = 0; j < C; j++) 
        {
            currentSum += matrix[i][j];
        }
        rowSums[i] = currentSum;
    }

    printf("\n--- Sum of Each Row ---\n");
    for (int i = 0; i < R; i++) 
    {
        printf("Sum of Row %d: %d\n", i + 1, rowSums[i]);
    }
    
    return 0; 
}