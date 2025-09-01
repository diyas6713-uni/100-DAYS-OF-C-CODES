//Write a program to classify a triangle as equilateral, isosceles or scalene based on its side lengths
#include<stdio.h>
#include<math.h>
int main()
{
    int a, b, c;

    printf("Enter the length of the first side of a triangle: ");
    scanf("%d", &a);
    printf("Enter the length of the second side of a triangle: ");
    scanf("%d", &b);
    printf("Enter the length of the third side of a triangle: ");
    scanf("%d", &c);

    if (a+b > c && b+c > a && a+c > b)
    {
        printf("The given triangle is a valid triangle.\n");

        if (a == b && b == c)
            printf("It is an Equilateral triangle.\n");
        else if (a == b || b == c || c == a)
            printf("It is an Isosceles triangle.\n");
        else
            printf("It is a Scalene triangle.\n");
    }
    else
    {
        printf("The given triangle is NOT a valid triangle.\n");
    }

    return 0;
}
