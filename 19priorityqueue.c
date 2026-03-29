#include <stdio.h>
#define MAX 5

int queue[MAX];
int n = 0;

void enqueue(int item)
{
    if(n == MAX)
    {
        printf("Queue Overflow\n");
        return;
    }

    int i = n - 1;

    while(i >= 0 && queue[i] > item)
    {
        queue[i + 1] = queue[i];
        i--;
    }

    queue[i + 1] = item;
    n++;
}

void dequeue()
{
    if(n == 0)
    {
        printf("Queue Underflow\n");
        return;
    }

    printf("Deleted: %d\n", queue[0]);

    for(int i = 1; i < n; i++)
        queue[i - 1] = queue[i];

    n--;
}

void display()
{
    if(n == 0)
    {
        printf("Queue is empty\n");
        return;
    }

    for(int i = 0; i < n; i++)
        printf("%d ", queue[i]);
    printf("\n");
}

int main()
{
    enqueue(30);
    enqueue(10);
    enqueue(20);

    display();

    dequeue();

    display();
printf("\n---------------------------------------------------\n");
    printf("Name: Rashmin Sharma || Roll No.: 104 || Section: C\n");
    return 0;
}