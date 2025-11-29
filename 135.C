//Assign explicit values starting from 10 and print them.
#include <stdio.h>
int main()
{
    enum Level { LOW = 10, MEDIUM = 20, HIGH = 30 };

    printf("LOW = %d\n", LOW);
    printf("MEDIUM = %d\n", MEDIUM);
    printf("HIGH = %d\n", HIGH);

    return 0;
}