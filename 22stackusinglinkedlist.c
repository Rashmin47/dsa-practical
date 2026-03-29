#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *top = NULL;

void push(int item)
{
    struct node *newnode;

    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = item;
    newnode->next = top;
    top = newnode;
}

void pop()
{
    struct node *temp;

    if(top == NULL)
    {
        printf("Stack Underflow\n");
        return;
    }

    temp = top;
    printf("Deleted: %d\n", temp->data);
    top = top->next;
    free(temp);
}

void display()
{
    struct node *temp = top;

    if(temp == NULL)
    {
        printf("Stack is empty\n");
        return;
    }

    while(temp != NULL)
    {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}

int main()
{
    push(10);
    push(20);
    push(30);

    display();

    pop();

    display();
            printf("\n---------------------------------------------------\n");
    printf("Name: Rashmin Sharma || Roll No.: 104 || Section: C\n");

    return 0;
}