#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;

void insert(int item)
{
    struct node *newnode;

    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = item;
    newnode->next = head;
    head = newnode;
}

void delete()
{
    struct node *temp;

    if(head == NULL)
    {
        printf("List is empty\n");
        return;
    }

    temp = head;
    printf("Deleted element: %d\n", temp->data);
    head = head->next;
    free(temp);
}

void display()
{
    struct node *temp = head;

    if(temp == NULL)
    {
        printf("List is empty\n");
        return;
    }

    while(temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main()
{
    insert(10);
    insert(20);
    insert(30);

    display();

    delete();

    display();
            printf("\n---------------------------------------------------\n");
    printf("Name: Rashmin Sharma || Roll No.: 104 || Section: C\n");

    return 0;
}