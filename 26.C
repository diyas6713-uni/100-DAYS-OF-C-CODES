//Write a program to print numbers from 1 to n
#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the value of n:\n");
    scanf("%d",&n);
    for (i=0; i<=n; i++)
    {
        printf("%d ",i);
    }
    return 0;
}