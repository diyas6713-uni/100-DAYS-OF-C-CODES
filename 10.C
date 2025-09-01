//Write a program to input time in seconds and convert it to hours:minutes:seconds format
#include<stdio.h>
int main()
{
    int hr,min,sec,s;
    printf("Enter the time in seconds: ");
    scanf("%d",&sec);

    min = (sec%3600)/60;
    hr = sec/3600;
    s = sec%60;

    printf("The time in hours:minutes:seconds format is %d hours %d minutes %d seconds",hr,min,s);
    return 0;
}