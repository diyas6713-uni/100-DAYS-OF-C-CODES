//Write  program to input an integer and check whether it is Positive, Negative or zero Using Nested if-else
#include <stdio.h>
int main()
{
    double num;
    printf("Enter a number: ");
    scanf("%lf", &num);
    
    if (num <= 0.0)
    {
        if (num == 0.0)
        {
            printf("You entered 0.");
        }
        else
        {
            printf("You entered a negative number.");
        }    
    } 
    else
    {
        printf("You entered a positive number.");
    }

    return 0;
}

