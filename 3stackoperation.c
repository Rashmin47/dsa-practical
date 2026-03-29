#include <stdio.h>
#define MAX 5

int stack[MAX];
int top = -1;

void push()
{
    int item;

    if(top == MAX - 1)
    {
        printf("Stack Overflow\n");
    }
    else
    {
        printf("Enter element to push: ");
        scanf("%d", &item);
        top = top + 1;
        stack[top] = item;
        printf("Element inserted\n");
    }
}

void pop()
{
    if(top == -1)
    {
        printf("Stack Underflow\n");
    }
    else
    {
        printf("Deleted element is %d\n", stack[top]);
        top = top - 1;
    }
}

int main()
{
    int choice;

    while(1)
    {
        printf("\n--- Stack Operations ---\n");
        printf("1. PUSH\n");
        printf("2. POP\n");
        printf("3. EXIT\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                push();
                break;

            case 2:
                pop();
                break;

            case 3:
                 printf("\n-----------------------------------------------------\n");
    printf("Name: Rashmin Sharma || Roll No.: 104 || Section: C\n");
    return 0;

            default:
                printf("Invalid choice\n");
        }
    }
   
    return 0;
}