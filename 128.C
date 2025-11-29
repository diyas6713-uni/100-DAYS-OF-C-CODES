//Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.
#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *fp;
    char text[500], ch;

    printf("Enter the text to write into the file:\n");
    fgets(text, sizeof(text), stdin);

    fp = fopen("text.txt", "a");
    if (fp == NULL)
    {
        printf("Error opening file for writing!\n");
        return 1;
    }

    fprintf(fp, "%s", text);

    fclose(fp);

    fp = fopen("text.txt", "r");
    if (fp == NULL)
    {
        printf("Error opening file for reading!\n");
        return 1;
    }

    int vowels = 0, consonants = 0;

    while ((ch = fgetc(fp)) != EOF)
    {
        ch = tolower(ch);

        if (ch >= 'a' && ch <= 'z')
        {
            if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
            {
                vowels++;
            }
            else
            {
                consonants++;
            }
        }
    }

    fclose(fp);

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}
