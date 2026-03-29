#include <stdio.h>
#define MAX 5

int queue[MAX];
int front = -1, rear = -1;

void enqueue(int item)
{
    if((rear + 1) % MAX == front)
    {
        printf("Queue Overflow\n");
        return;
    }

    if(front == -1) front = 0;

    rear = (rear + 1) % MAX;
    queue[rear] = item;
}

void dequeue()
{
    if(front == -1)
    {
        printf("Queue Underflow\n");
        return;
    }

    printf("Deleted: %d\n", queue[front]);

    if(front == rear)
        front = rear = -1;
    else
        front = (front + 1) % MAX;
}

void display()
{
    int i;

    if(front == -1)
    {
        printf("Queue is empty\n");
        return;
    }

    i = front;
    while(1)
    {
        printf("%d ", queue[i]);
        if(i == rear) break;
        i = (i + 1) % MAX;
    }
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