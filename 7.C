//Write a program to swap two numbers without using a third variable
#include<stdio.h>
int main()
{
  double a, b;
  printf("Enter first number: ");
  scanf("%lf", &a);
  printf("Enter second number: ");
  scanf("%lf", &b);

  a=a+b;
  b=a-b;
  a=a-b;

  // %.2lf displays number up to 2 decimal points
  printf("\nAfter swapping, first number = %.2lf\n", a);
  printf("After swapping, second number = %.2lf", b);
  return 0;
}