//Write a program to print the following patter:
//5
//45
//345
//2345
//12345
#include <stdio.h>
int main()
{
    int i, j, rows, start;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) 
    {
        start = rows - i + 1;
        for (j = start; j <= rows; j++) 
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}