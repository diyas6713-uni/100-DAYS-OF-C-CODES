//Delete an element from an array
#include <stdio.h>
int main()
{
    int n, pos, i;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter position to delete (0 to %d): ", n - 1);
    scanf("%d", &pos);

    for(i = pos; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }

    printf("Array after deletion: ");
    for(i = 0; i < n - 1; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
