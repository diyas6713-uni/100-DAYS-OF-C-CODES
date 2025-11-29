//Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().
#include <stdio.h>

int main()
{
    char src[100], dest[100];

    printf("Enter source filename: ");
    scanf("%s", src);

    printf("Enter destination filename: ");
    scanf("%s", dest);

    FILE *fp1 = fopen(src, "r");
    FILE *fp2 = fopen(dest, "w");

    if(fp1 == NULL || fp2 == NULL)
    {
        return 0;
    }

    int ch;
    while((ch = fgetc(fp1)) != EOF)
    {
        fputc(ch, fp2);
    }

    fclose(fp1);
    fclose(fp2);

    return 0;
}
