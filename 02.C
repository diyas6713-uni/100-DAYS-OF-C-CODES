//Write a program to input two numbers and display their sum, difference, product and quotient
#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d,e,f,g,h;
    printf("Enter the first number:\n");
    scanf("%d",&a);
    printf("Enter the second number:\n");
    scanf("%d",&b);
    c=a+b;
    d=a-b;
    e=a*b;
    f=pow(a,b);
    g=a/b;
    h=a%b;
    printf("The sum of the two numbers you entered is %d\n",c);
    printf("The difference of the two numbers you entered is %d\n",d);
    printf("The product of the two numbers you entered is %d\n",e);
    printf("the quotient of the two numbers is %d\n",g);
    printf("the remainder of the two numbers is %d\n",h);
    printf("%d raised to power %d is %d\n",a,b,f);
    return 0;
}
