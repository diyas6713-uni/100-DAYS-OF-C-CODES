//Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.
#include <stdio.h>
int main()
{
    FILE *fp;
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    fp = fopen("students.txt", "w");
    if(fp == NULL)
    {
        printf("File could not be opened.\n");
        return 0;
    }

    for(int i = 0; i < n; i++)
    {
        char name[50];
        int roll;
        float marks;

        printf("Enter name: ");
        scanf("%s", name);

        printf("Enter roll number: ");
        scanf("%d", &roll);

        printf("Enter marks: ");
        scanf("%f", &marks);

        fprintf(fp, "%s %d %f\n", name, roll, marks);
    }

    fclose(fp);

    fp = fopen("students.txt", "r");
    if(fp == NULL)
    {
        printf("File could not be opened.\n");
        return 0;
    }

    printf("\nStored Records:\n");

    while(1)
    {
        char name[50];
        int roll;
        float marks;

        if(fscanf(fp, "%s %d %f", name, &roll, &marks) == EOF)
            break;

        printf("Name: %s | Roll: %d | Marks: %.2f\n", name, roll, marks);
    }

    fclose(fp);

    return 0;
}