#include <stdio.h>

int gcd(int a, int b)
{
    if(b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("GCD = %d\n", gcd(a, b));

    printf("\n---------------------------------------------------\n");
    printf("Name: Rashmin Sharma || Roll No.: 104 || Section: C\n");

    return 0;
}