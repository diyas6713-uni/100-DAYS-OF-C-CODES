//Insert an element in an array at a given position
#include <stdio.h>
int main()
{
    int n, pos, x, i;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int a[n + 1];

    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter position to insert (0 to %d): ", n);
    scanf("%d", &pos);

    printf("Enter element to insert: ");
    scanf("%d", &x);

    for(i = n; i > pos; i--)
    {
        a[i] = a[i - 1];
    }

    a[pos] = x;

    printf("Array after insertion: ");
    for(i = 0; i <= n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
