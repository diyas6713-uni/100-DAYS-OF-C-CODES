//Check if one string is a rotation of another
#include <stdio.h>
#include <string.h>
int main()
{
    char s1[200], s2[200], temp[400];

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

    if(strlen(s1) != strlen(s2))
    {
        printf("Not a rotation.\n");
        return 0;
    }

    strcpy(temp, s1);
    strcat(temp, s1);

    if(strstr(temp, s2) != NULL)
        printf("The strings are rotations of each other.\n");
    else
        printf("The strings are NOT rotations of each other.\n");

    return 0;
}
