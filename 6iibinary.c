#include <stdio.h>

int BinarySearch(int a[100], int l, int r, int key)
{
    int m;

    if(l <= r)
    {
        m = (l + r) / 2;

        if(key == a[m])
            return m;
        else if(key < a[m])
            return BinarySearch(a, l, m - 1, key);
        else
            return BinarySearch(a, m + 1, r, key);
    }

    return -1; // not found
}

int main()
{
    int n, a[100], i, key, flag;

    printf("Enter no of data items:\n");
    scanf("%d", &n);

    printf("Enter %d data items in sorted form:\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter searched item: ");
    scanf("%d", &key);

    flag = BinarySearch(a, 0, n - 1, key);

    if(flag == -1)
        printf("Search Un-Successful");
    else
        printf("Search successful and found at location %d", flag + 1);
        printf("\n---------------------------------------------------\n");
    printf("Name: Rashmin Sharma || Roll No.: 104 || Section: C\n");
    return 0;
}