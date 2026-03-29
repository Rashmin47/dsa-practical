#include <stdio.h>
#define MAX 50

int main()
{
    int a[MAX], n, i, pos, item;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    // Insert operation
    printf("Enter position to insert: ");
    scanf("%d", &pos);
    printf("Enter element to insert: ");
    scanf("%d", &item);

    for(i = n - 1; i >= pos - 1; i--)
        a[i + 1] = a[i];

    a[pos - 1] = item;
    n++;

    printf("List after insertion:\n");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    // Delete operation
    printf("\nEnter position to delete: ");
    scanf("%d", &pos);

    for(i = pos - 1; i < n - 1; i++)
        a[i] = a[i + 1];

    n--;

    printf("List after deletion:\n");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

        printf("\n---------------------------------------------------\n");
    printf("Name: Rashmin Sharma || Roll No.: 104 || Section: C\n");

    return 0;
}