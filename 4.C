//Write a program to calculate the area and circumference of a circle given its radius
#include<stdio.h>
#include<math.h>
int main()
{
    float r,b,c,d,pi=3.1415;
    printf("Enter the radius of the circle:\n");
    scanf("%f",&r);
    c=2*pi*r;
    d=pi*r*r;
    printf("circumference = %f\n",c);
    printf("Area = %f\n",d);
    return 0;
}