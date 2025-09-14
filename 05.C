//write a program to convert temperature from celsius to fahrenheit
#include<stdio.h>
int main()
{
    float c,f;
    printf("Enter the value of temperature in Celsius scale: \n");
    scanf("%f",&c);
    f = (c*(9/5))+32;
    printf("%f in celsius scale is %f in fahrenheit scale\n",c,f);
    return 0;
}
