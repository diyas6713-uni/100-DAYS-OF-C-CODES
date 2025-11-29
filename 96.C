//Reverse each word in a sentence without changing the word order
#include <stdio.h>
#include <string.h>
int main()
{
    char str[300];
    int start = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    int len = strlen(str);

    for(int i = 0; i <= len; i++)
    {
        if(str[i] == ' ' || str[i] == '\0' || str[i] == '\n')
        {
            int left = start;
            int right = i - 1;

            while(left < right)
            {
                char temp = str[left];
                str[left] = str[right];
                str[right] = temp;
                left++;
                right--;
            }

            start = i + 1;
        }
    }

    printf("Result: %s", str);

    return 0;
}