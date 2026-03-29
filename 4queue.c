#include <stdio.h>
#define MAX 5

int queue[MAX];
int front = -1, rear = -1;

void enqueue()
{
    int item;

    if(rear == MAX - 1)
    {
        printf("Queue Overflow\n");
    }
    else
    {
        printf("Enter element to insert: ");
        scanf("%d", &item);

        if(front == -1)
            front = 0;

        rear = rear + 1;
        queue[rear] = item;

        printf("Element inserted\n");
    }
}

void dequeue()
{
    if(front == -1 || front > rear)
    {
        printf("Queue Underflow\n");
    }
    else
    {
        printf("Deleted element is %d\n", queue[front]);
        front = front + 1;
    }
}

int main()
{
    int choice;

    while(1)
    {
        printf("\n--- Queue Operations ---\n");
        printf("1. INQUEUE (Insert)\n");
        printf("2. DEQUEUE (Delete)\n");
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