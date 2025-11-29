//Find and print the student with the highest marks.
#include <stdio.h>

struct Student 
{
    char name[50];
    int roll;
    float marks;
};

int main() 
{
    int n, i, topIndex = 0;

    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];

    for (i = 0; i < n; i++) 
    {
        printf("\nEnter details of Student %d\n", i + 1);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("Roll: ");
        scanf("%d", &s[i].roll);
        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    for (i = 1; i < n; i++) 
    {
        if (s[i].marks > s[topIndex].marks) 
        {
            topIndex = i;
        }
    }

    printf("\n--- Student With Highest Marks ---\n");
    printf("Name  : %s\n", s[topIndex].name);
    printf("Roll  : %d\n", s[topIndex].roll);
    printf("Marks : %.2f\n", s[topIndex].marks);

    return 0;
}
