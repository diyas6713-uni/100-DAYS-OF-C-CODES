//Check if two strings are anagrams of each other
#include <stdio.h>
#include <string.h>
int main()
{
    char s1[200], s2[200];
    int count1[256] = {0}, count2[256] = {0};

    printf("Enter first string: ");
    fgets(s1, sizeof(s1), stdin);

    printf("Enter second string: ");
    fgets(s2, sizeof(s2), stdin);

    int len1 = strlen(s1);
    int len2 = strlen(s2);

    if(s1[len1 - 1] == '\n')
        s1[len1 - 1] = '\0';

    if(s2[len2 - 1] == '\n')
        s2[len2 - 1] = '\0';

    for(int i = 0; s1[i] != '\0'; i++)
        count1[(unsigned char)s1[i]]++;

    for(int i = 0; s2[i] != '\0'; i++)
        count2[(unsigned char)s2[i]]++;

    int flag = 1;
    for(int i = 0; i < 256; i++)
    {
        if(count1[i] != count2[i])
        {
            flag = 0;
            break;
        }
    }

    if(flag == 1)
        printf("The strings are anagrams.\n");
    else
        printf("The strings are NOT anagrams.\n");

    return 0;
}