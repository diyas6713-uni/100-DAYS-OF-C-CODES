//Write a program to calculate the area and perimeter of a rectangle given its length and breadth
#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d;
    printf("Enter the length of the rectangle:\n");
    scanf("%d",&a);
    printf("Enter the breadth of the rectangle:\n");
    scanf("%d",&b);
    c=2*(a+b);
    d=a*b;
    printf("Perimeter = %d\n",c);
    printf("Area = %d\n",d);
    return 0;
}
