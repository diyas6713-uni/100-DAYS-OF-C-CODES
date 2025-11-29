//Write a program to swap the first and last digit of a number
#include <stdio.h>
#include <math.h>
int main() 
{
    int num, first, last, digits, power, mid;

    printf("Enter a number: ");
    scanf("%d", &num);

    last = num % 10;

    digits = (int)log10(num);
    power = pow(10, digits);

    first = num / power;

    mid = num % power;
    mid = mid / 10;

    int swapped = (last * power) + (mid * 10) + first;

    printf("Number after swapping first and last digit: %d\n", swapped);

    return 0;
}