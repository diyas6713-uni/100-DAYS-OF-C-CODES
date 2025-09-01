//Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit or special character
#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z') 
    {
        printf("It is an UPPERCASE alphabet.\n");
    } 
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("It is a LOWERCASE alphabet.\n");
    } 
    else if (ch >= '0' && ch <= '9') 
    {
        printf("It is a DIGIT.\n");
    } 
    else 
    {
        printf("It is a SPECIAL character.\n");
    }

    return 0;
}
