#include <stdio.h>

int main() {
    int r, c, i, j;
    int matrix[50][50];

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter the elements of the matrix:\n");

    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nNon-zero elements with their location:\n");

    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            if(matrix[i][j] != 0) {
                printf("Value %d at position (%d,%d)\n", matrix[i][j], i, j);
            }
        }
    }
 printf("\n---------------------------------------------------------\n");
    printf("Name: Rashmin Sharma || Roll No.: 104 || Section: C\n");
    return 0;
}