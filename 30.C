//Write a program to reverse a number
#include <stdio.h>
int main()
{
    int number, reversed = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &number);

    while (number != 0)
    {
        remainder = number % 10;
        reversed = reversed * 10 + remainder;
        number = number / 10;
    }

    printf("Reversed number: %d\n", reversed);
    return 0;
}