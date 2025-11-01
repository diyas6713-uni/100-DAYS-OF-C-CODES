//Find the sum of all elements in a matrix
#include <stdio.h>
int main() 
{
    int m, n, matrix[m][n], sum = 0;
    printf("Enter rows and columns: ");
    scanf("%d, %d", &m, &n);

    printf("Enter elements:\n");
    for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];
        }
    }

    printf("Sum of all elements = %d\n", sum);
    return 0;
}
