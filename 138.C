//Print all enum names and integer values using a loop.
#include <stdio.h>
int main()
{
    enum Color { RED = 5, GREEN, BLUE = 20, YELLOW };

    char *names[] = { "RED", "GREEN", "BLUE", "YELLOW" };
    int values[] = { RED, GREEN, BLUE, YELLOW };

    int size = 4;

    for(int i = 0; i < size; i++)
    {
        printf("%s = %d\n", names[i], values[i]);
    }

    return 0;
}