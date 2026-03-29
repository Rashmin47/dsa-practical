#include <stdio.h>
#define MAX 5

int queue[MAX];
int front = -1, rear = -1;

void enqueue(int item)
{
    if(rear == MAX - 1)
    {
        printf("Queue Overflow\n");
        return;
    }
    if(front == -1) front = 0;

    queue[++rear] = item;
}

void dequeue()
{
    if(front == -1 || front > rear)
    {
        printf("Queue Underflow\n");
        return;
    }

    printf("Deleted: %d\n", queue[front++]);
}

void display()
{
    int i;
    if(front == -1)
    {
        printf("Queue is empty\n");
        return;
    }

    for(i = front; i <= rear; i++)
        printf("%d ", queue[i]);
    printf("\n");
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);

    display();

    dequeue();

    display();
         printf("\n---------------------------------------------------\n");
    printf("Name: Rashmin Sharma || Roll No.: 104 || Section: C\n");

    return 0;
}