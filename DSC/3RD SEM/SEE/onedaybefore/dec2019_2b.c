// Write C program to implement stack using single linked list.

#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} node;

node *head;

void push()
{
    node *newNode;
    if (head == NULL)
    {

        head = malloc(sizeof(node));
        if (head == NULL)
            printf("Node Creaiton failed");
        else
        {
            printf("Value to push: ");
            scanf("%d", &head->data);
            head->next = NULL;
        }
    }
    else
    {
        newNode = malloc(sizeof(node));
        printf("Value to push: ");
        scanf("%d", &newNode->data);
        newNode->next = head;
        head = newNode;
    }
}

void pop()
{
    printf("Value popped is: %d\n", head->data);
    head = head->next;
}

void display()
{
    node *print;
    print = head;

    printf("STACK :::\n");
    while (print != NULL)
    {
        printf("%d\n", print->data);
        print = print->next;
    }
}

int main()
{
    int option_num;
    while (1)
    {
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        scanf("%d", &option_num);
        switch (option_num)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        default:
            break;
        }
    }
    return 0;
}