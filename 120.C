//Write a program to take a string input. Change it to sentence case
#include <stdio.h>
#include <ctype.h>
int main()
{
    char str[200];
    int i = 0;
    int makeUpper = 1; 

    printf("Enter a string:\n");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0')
    {
        if (makeUpper && isalpha(str[i]))
        {
            str[i] = toupper(str[i]);
            makeUpper = 0;
        }
        else
        {
            str[i] = tolower(str[i]);
        }

        if (str[i] == '.' || str[i] == '?' || str[i] == '!')
        {
            makeUpper = 1;
        }

        i++;
    }

    printf("\nSentence case:\n%s", str);

    return 0;
}