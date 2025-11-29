//Check if a string is a palindrome
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int len = strlen(str);

    if(str[len - 1] == '\n')
    {
        str[len - 1] = '\0';
        len--;
    }

    int start = 0, end = len - 1;
    int flag = 1;

    while(start < end)
    {
        if(str[start] != str[end])
        {
            flag = 0;
            break;
        }
        start++;
        end--;
    }

    if(flag == 1)
    {
        printf("The string is a palindrome.\n");
    }
    else
    {
        printf("The string is NOT a palindrome.\n");
    }

    return 0;
}