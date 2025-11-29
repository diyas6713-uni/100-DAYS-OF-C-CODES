//Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.
#include <stdio.h>
int main()
{
    enum Light { RED = 1, YELLOW, GREEN };
    int signal;

    printf("Enter signal (1=RED, 2=YELLOW, 3=GREEN): ");
    scanf("%d", &signal);

    if(signal == RED)
    {
        printf("Stop\n");
    }
    else if(signal == YELLOW)
    {
        printf("Wait\n");
    }
    else if(signal == GREEN)
    {
        printf("Go\n");
    }
    else
    {
        printf("Invalid signal\n");
    }

    return 0;
}