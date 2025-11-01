//Add two matrices
#include <stdio.h>
int main() 
{
    int r1, c1, r2, c2;

    printf("Enter rows of first matrix: ");
    scanf("%d", &r1);
    printf("Enter columns of first matrix: ");
    scanf("%d", &c1);

    int A[r1][c1];
    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < r1; i++) 
    {
        for (int j = 0; j < c1; j++) 
        {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter rows of second matrix: ");
    scanf("%d", &r2);
    printf("Enter columns of second matrix: ");
    scanf("%d", &c2);

    int B[r2][c2];
    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < r2; i++) 
    {
        for (int j = 0; j < c2; j++) 
        {
            scanf("%d", &B[i][j]);
        }
    }

    if (r1 != r2 || c1 != c2) 
    {
        printf("\nMatrix addition not possible! Orders are not equal.\n");
        return 0;
    }

    int Sum[r1][c1];
    for (int i = 0; i < r1; i++) 
    {
        for (int j = 0; j < c1; j++) 
        {
            Sum[i][j] = A[i][j] + B[i][j];
        }
    }

    printf("\nSum of the two matrices:\n");
    for (int i = 0; i < r1; i++) 
    {
        for (int j = 0; j < c1; j++) 
        {
            printf("%d\t", Sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}