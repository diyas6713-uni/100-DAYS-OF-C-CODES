//Show that enums store integers by printing assigned values.
#include <stdio.h>
int main()
{
    enum Color { RED, GREEN, BLUE };
    enum Day { MON = 1, TUE, WED = 10, THU, FRI };

    printf("RED = %d\n", RED);
    printf("GREEN = %d\n", GREEN);
    printf("BLUE = %d\n", BLUE);

    printf("MON = %d\n", MON);
    printf("TUE = %d\n", TUE);
    printf("WED = %d\n", WED);
    printf("THU = %d\n", THU);
    printf("FRI = %d\n", FRI);

    return 0;
}
