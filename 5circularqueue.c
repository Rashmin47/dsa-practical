#include <stdio.h>
#define MAX 5

int cq[MAX];
int front = -1, rear = -1;

void enqueue()
{
    int item;

    if((front == 0 && rear == MAX-1) || (front == rear + 1))
    {
        printf("Queue Overflow\n");
    }
    else
    {
        printf("Enter element: ");
        scanf("%d", &item);

        if(front == -1)
        {
            front = rear = 0;
        }
        else if(rear == MAX - 1)
        {
            rear = 0;
        }
        else
        {
            rear = rear + 1;
        }

        cq[rear] = item;
        printf("Element inserted\n");
    }
}

void dequeue()
{
    if(front == -1)
    {
        printf("Queue Underflow\n");
    }
    else
    {
        printf("Deleted element is %d\n", cq[front]);

        if(front == rear)
        {
            front = rear = -1;
        }
        else if(front == MAX - 1)
        {
            front = 0;
        }
        else
        {
            front = front + 1;
        }
    }
}

int main()
{
    int choice;

    while(1)
    {
        printf("\n--- Circular Queue Operations ---\n");
        printf("1. INQUEUE\n");
        printf("2. DEQUEUE\n");
        printf("3. EXIT\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                enqueue();
                break;

            case 2:
                dequeue();
                break;

            case 3:
                        printf("\n-----------------------------------------------------\n");
    printf("Name: Rashmin Sharma || Roll No.: 104 || Section: C\n");
                return 0;

            default:
                printf("Invalid choice\n");
        }
    }
}