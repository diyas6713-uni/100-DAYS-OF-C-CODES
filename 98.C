//Print initials of a name with the surname displayed in full
#include <stdio.h>
#include <string.h>
int main() 
{
    char name[100];
    char words[10][20];
    int i = 0, j = 0, k = 0;

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';

    while (name[i] != '\0') 
    {
        if (name[i] == ' ') 
        {
            words[j][k] = '\0';
            j++;
            k = 0;
        } else {
            words[j][k++] = name[i];
        }
        i++;
    }
    words[j][k] = '\0';
    int total = j + 1;

    for (i = 0; i < total - 1; i++) 
    {
        printf("%c. ", words[i][0]);
    }

    printf("%s\n", words[total - 1]);

    return 0;
}