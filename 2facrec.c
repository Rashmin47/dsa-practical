#include <stdio.h>

int factorial(int n)
{
    if(n == 0 || n == 1)   // Base condition
        return 1;
    else
        return n * factorial(n - 1);   // Recursive call
}

int main()
{
    int num, fact;

    printf("Enter an integer: ");
    scanf("%d", &num);

    fact = factorial(num);

    printf("Factorial of %d = %d", num, fact);
    printf("\n---------------------------------------------------------\n");
    printf("Name: Rashmin Sharma || Roll No.: 104 || Section: C\n");
    return 0;
}