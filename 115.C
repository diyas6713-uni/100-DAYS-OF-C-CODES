//Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".
#include <stdio.h>
#include <string.h>

int main()
{
    char s[200], t[200];
    int freq1[26] = {0}, freq2[26] = {0};

    printf("Enter first string: ");
    scanf("%s", s);

    printf("Enter second string: ");
    scanf("%s", t);

    for(int i = 0; s[i] != '\0'; i++)
    {
        freq1[s[i] - 'a']++;
    }

    for(int i = 0; t[i] != '\0'; i++)
    {
        freq2[t[i] - 'a']++;
    }

    int isAnagram = 1;
    for(int i = 0; i < 26; i++)
    {
        if(freq1[i] != freq2[i])
        {
            isAnagram = 0;
            break;
        }
    }

    if(isAnagram)
    {
        printf("Anagram");
    }
    else
    {
        printf("Not Anagram");
    }

    return 0;
}
