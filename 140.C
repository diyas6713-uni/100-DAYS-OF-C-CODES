//Define a struct with enum Gender and print person's gender.
#include <stdio.h>

enum Gender 
{
    MALE,
    FEMALE,
    OTHER
};

struct Person 
{
    char name[50];
    enum Gender gen;
};

int main() 
{
    struct Person p;
    int g;

    printf("Enter name: ");
    scanf("%s", p.name);

    printf("Enter gender (0 = Male, 1 = Female, 2 = Other): ");
    scanf("%d", &g);

    p.gen = g;

    printf("\n--- Details ---\n");
    printf("Name   : %s\n", p.name);
    printf("Gender : ");

    if (p.gen == MALE)
        printf("Male\n");
    else if (p.gen == FEMALE)
        printf("Female\n");
    else
        printf("Other\n");

    return 0;
}