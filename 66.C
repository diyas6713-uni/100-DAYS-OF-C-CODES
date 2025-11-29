//Insert an element in a sorted array at the appropriate position
#include <stdio.h>
int main() 
{
    int n, x, i, pos;

    printf("Enter size of sorted array: ");
    scanf("%d", &n);

    int a[n + 1];

    printf("Enter %d sorted elements: ", n);
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter element to insert: ");
    scanf("%d", &x);

    pos = n; 
    for(i = 0; i < n; i++) 
    {
        if(x < a[i]) 
        {
            pos = i;
            break;
        }
    }

    for(i = n; i > pos; i--)
        a[i] = a[i - 1];

    a[pos] = x;

    printf("Array after insertion: ");
    for(i = 0; i <= n; i++)
        printf("%d ", a[i]);

    return 0;
}