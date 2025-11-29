//Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.
#include <stdio.h>
int main()
{
    enum Role { ADMIN = 1, USER, GUEST };
    enum Role r;

    printf("Enter role (1=ADMIN, 2=USER, 3=GUEST): ");
    scanf("%d", &r);

    if(r == ADMIN)
    {
        printf("Welcome, Admin! You have full access.\n");
    }
    else if(r == USER)
    {
        printf("Hello User! You have limited access.\n");
    }
    else if(r == GUEST)
    {
        printf("Welcome Guest! You have view-only access.\n");
    }
    else
    {
        printf("Invalid role entered.\n");
    }

    return 0;
}