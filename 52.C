//Write a program to print the following pattern
//*
//
//*
//*
//*
//
//*
//*
//*
//*
//*
//
//*
//*
//*
//
//*
//Write a program to print the following pattern
//*
//
//*
//*
//*
//
//*
//*
//*
//*
//*
//
//*
//*
//*
//
//*

#include <stdio.h>
int main() 
{
    int groups[] = {1, 0, 3, 0, 5, 0, 3, 0, 1};
    int n = 9;

    for(int i = 0; i < n; i++) 
    {
        if(groups[i] == 0)
        {
            printf("\n");
        }
        else 
        {
            for(int j = 0; j < groups[i]; j++)
                printf("*\n");
        }
    }

    return 0;
}
