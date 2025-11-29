//Write a program to find the sum of the series:
//1 + 3/4 + 5/6 + 7/8 + upto n terms
#include <stdio.h>
int main() 
{
    int n;
    float sum = 0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) 
    {
        int num = 2*i - 1;
        int den = 2*i;
        sum += (float)num / den;
    }

    printf("Sum of series = %.4f\n", sum);

    return 0;
}
