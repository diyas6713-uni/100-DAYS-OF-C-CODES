//Write a program to print all the prime numbers between 1 to n
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the upper limit (n): ");
    scanf("%d", &n);

    printf("\nPrime numbers up to %d are:\n", n);

    for (int i = 2; i <= n; i++) 
    {
        int isPrime = 1;
        for (int j = 2; j < i; j++) 
        {
            if (i % j == 0) 
            {
                isPrime = 0;
                break;
            }
        }

        if (isPrime == 1) 
        {
            printf("%d ", i);
        }
    }

    printf("\n"); 
    return 0; 
}