//Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.
#include <stdio.h>
int main()
{
    int n, i;
    int arr[100];
    int xorArray = 0, xorRange = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        xorArray ^= arr[i];

        if (i > 0)
        {
            xorRange ^= i;
        }
    }

    printf("Repeated element = %d\n", xorArray ^ xorRange);

    return 0;
}