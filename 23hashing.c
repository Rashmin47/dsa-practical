#include <stdio.h>
#define SIZE 10

int main()
{
    int hash[SIZE], i, key, index;

    // Initialize hash table
    for(i = 0; i < SIZE; i++)
        hash[i] = -1;

    printf("Enter 5 elements:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &key);
        index = key % SIZE;

        while(hash[index] != -1)
        {
            index = (index + 1) % SIZE;
        }

        hash[index] = key;
    }

    printf("Hash Table:\n");
    for(i = 0; i < SIZE; i++)
    {
        if(hash[i] != -1)
            printf("Index %d: %d\n", i, hash[i]);
        else
            printf("Index %d: Empty\n", i);
    }
            printf("\n---------------------------------------------------\n");
    printf("Name: Rashmin Sharma || Roll No.: 104 || Section: C\n");

    return 0;
}