//Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.
#include <stdio.h>
int main()
{
    enum Status { SUCCESS = 1, FAILURE, TIMEOUT };
    enum Status s;

    printf("Enter status (1=SUCCESS, 2=FAILURE, 3=TIMEOUT): ");
    scanf("%d", &s);

    if(s == SUCCESS)
    {
        printf("Operation completed successfully.\n");
    }
    else if(s == FAILURE)
    {
        printf("Operation failed.\n");
    }
    else if(s == TIMEOUT)
    {
        printf("Operation timed out.\n");
    }
    else
    {
        printf("Invalid input.\n");
    }

    return 0;
}