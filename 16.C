//Write a program to input three numbers and find the largest among them using if-else
#include <stdio.h>
int main()
{
  double n1, n2, n3;
  printf("Enter first number: ");
  scanf("%lf",&n1);
  printf("Enter second number: ");
  scanf("%lf",&n2);
  printf("Enter third numbers: ");
  scanf("%lf",&n3);

  if (n1 >= n2 && n1 >= n3)
  {
    printf("%.2f is the largest number.",n1);
  }
  if (n2 >= n1 && n2 >= n3)
  {
    printf("%.2f is the largest number.",n2);
  }
  if (n3 >= n1 && n3 >= n2)
  {
    printf("%.2f is the largest number.",n3);
  }

  return 0;
}