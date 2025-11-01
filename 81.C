//Count characters in a string without using built-in length functions.
#include <stdio.h>
int main() 
{
    char str[10000];
    int count = 0;
    printf("Enter a string: ");
    scanf("%[^\n]", str);
    for (int i = 0; str[i] != '\0'; i++) 
    {
        count++;
    }
    printf("Total number of characters in the string: %d\n", count);
    return 0;
}
