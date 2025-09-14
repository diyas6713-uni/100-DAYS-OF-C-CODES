//Write a program to find the LCM of two numbers
#include <stdio.h>
int main()
{
    int n1, n2, i, hcf, lcm;
    printf("Enter two numbers: ");
    scanf("%d, %d", &n1, &n2);

    for(i = 1; i <= n1 && i <= n2; i++) 
    {
        if(n1 % i == 0 && n2 % i == 0)
            hcf = i;
    }

    lcm = (n1 * n2) / hcf;
    printf("LCM of %d and %d is %d\n", n1, n2, lcm);

    return 0;
}
