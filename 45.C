//Write a program to find the sum of the series:
//2/3 + 4/7 + 6/11 + 8/15 + upto n terms
#include <stdio.h>
int main() 
{
    int n;
    float sum = 0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) 
    {
        int num = 2 * i;
        int den = 4 * i - 1;
        sum += (float)num / den;
    }

    printf("Sum of series = %.4f\n", sum);

    return 0;
}
