//Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.
#include <stdio.h>

int main()
{
    char filename[100];
    char text[500];

    printf("Enter filename: ");
    scanf("%s", filename);

    FILE *fp = fopen(filename, "a");
    if(fp == NULL)
    {
        return 0;
    }

    printf("Enter text to append: ");
    getchar();
    fgets(text, sizeof(text), stdin);

    fputs(text, fp);

    fclose(fp);
    return 0;
}
