//Change the date format from dd/04/yyyy to dd-Apr-yyyy
#include <stdio.h>
int main() 
{
    int d, m, y;
    char *mon[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

    printf("Enter date (dd/mm/yyyy): ");
    scanf("%d,%d,%d", &d, &m, &y);

    printf("%02d-%s-%d\n", d, mon[m - 1], y);

    return 0;
}