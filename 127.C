//Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.
#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *in = fopen("input.txt", "r");
    FILE *out = fopen("output.txt", "w");

    if(in == NULL || out == NULL)
    {
        return 0;
    }

    char ch;
    while((ch = fgetc(in)) != EOF)
    {
        if(islower(ch))
        {
            ch = toupper(ch);
        }
        fputc(ch, out);
    }

    fclose(in);
    fclose(out);

    return 0;
}
