#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr, n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Allocate memory
    ptr = (int*)malloc(n * sizeof(int));

    if(ptr == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Input elements
    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
    }

    // Display elements
    printf("Elements are:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", ptr[i]);
    }

    // Free memory
    free(ptr);

    printf("\nMemory deallocated successfully\n");
 printf("\n---------------------------------------------------\n");
    printf("Name: Rashmin Sharma || Roll No.: 104 || Section: C\n");
    return 0;
}