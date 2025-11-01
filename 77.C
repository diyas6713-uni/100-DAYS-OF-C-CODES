//Check if the elements on the diagonal of a matrix are distinct.
#include <stdio.h>
int main() 
{
    int n, i, j, flag = 1;

    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    int A[n][n];
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++) 
    {
        for (j = 0; j < n; j++) 
        {
            scanf("%d", &A[i][j]);
        }
    }

    for (i = 0; i < n; i++) 
    {
        for (j = i + 1; j < n; j++) 
        {
            if (A[i][i] == A[j][j]) 
            {
                flag = 0;
                break;
            }
        }
        if (flag == 0) break;
    }

    if (flag)
        printf("Diagonal elements are distinct.\n");
    else
        printf("Diagonal elements are NOT distinct.\n");

    return 0;
}