//Find the longest word in a sentence
#include <stdio.h>
#include <string.h>
int main()
{
    char str[300];
    char longest[100];
    int maxLen = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    int i = 0, start = 0;

    while(1)
    {
        if(str[i] == ' ' || str[i] == '\0' || str[i] == '\n')
        {
            int len = i - start;

            if(len > maxLen)
            {
                maxLen = len;
                strncpy(longest, &str[start], len);
                longest[len] = '\0';
            }

            if(str[i] == '\0')
                break;

            start = i + 1;
        }

        i++;
    }

    printf("Longest word: %s\n", longest);

    return 0;
}