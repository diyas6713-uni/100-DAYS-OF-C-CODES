//Perform diagonal traversal of a matrix.
#include <stdio.h>
int main()
{
    int r, c, i, j, start;

    printf("Enter number of rows: ");
    scanf("%d", &r);

    printf("Enter number of columns: ");
    scanf("%d", &c);

    int a[r][c];

    printf("Enter elements of the matrix:\n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Diagonal traversal:\n");

    for(start = 0; start < r; start++)
    {
        i = start;
        j = 0;

        while(i >= 0 && j < c)
        {
            printf("%d ", a[i][j]);
            i--;
            j++;
        }
        printf("\n");
    }

    for(start = 1; start < c; start++)
    {
        i = r - 1;
        j = start;

        while(i >= 0 && j < c)
        {
            printf("%d ", a[i][j]);
            i--;
            j++;
        }
        printf("\n");
    }

    return 0;
}
