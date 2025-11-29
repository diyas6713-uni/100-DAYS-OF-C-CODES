//Reverse an array without taking extra space
#include <stdio.h>
int main() 
{
    int n, i, temp;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    int start = 0, end = n - 1;

    while(start < end) 
    {
        temp = a[start];
        a[start] = a[end];
        a[end] = temp;

        start++;
        end--;
    }

    printf("Reversed array: ");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
