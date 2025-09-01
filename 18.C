//Write a program to assign grades based on a percentage input
#include <stdio.h>
int main()
{
    int avg;
    printf("Enter Percentage : ");
    scanf("%d",&avg);
    
    if (avg>33)
        {
            if (avg<=45)
        {
            printf("Result : Pass\n");
            printf("Division : Third\n");
        }
            else
            {
                if (avg<=60)
                {
                    printf("Result : Pass\n");
                    printf("Division : Second\n");
                }
                else
                {
                    if (avg<=75)
                    {
                        printf("Result : Pass\n");
                        printf("Division : First\n");
                    }
                    else
                    {
                        printf("Result : Pass\n");
                        printf("Division : Hon.\n");
                    }
                }
            }
        }
    else
    {
        printf("Result : Fail\n");
    }
    return 0;
}