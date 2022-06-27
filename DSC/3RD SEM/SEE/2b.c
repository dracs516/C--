// Write C program to implement stack using single linked list.

#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} node;

node *head;
node *temp;
int node_num;

void push()
{
    node *newNode;
    if (head == NULL)
    {
        head = malloc(sizeof(node));
        if (head == NULL)
        {
            printf("Node creation failed");
        }
        else
        {
            printf("Enter data in Stack : ");
            scanf("%d", &head->data);
            head->next = NULL;
            temp = head;
        }
    }
    else
    {
        newNode = malloc(sizeof(node));
        if (newNode == NULL)
        {
            printf("Node creation failed");
        }
        else
        {
            printf("Enter data in Stack : ");
            scanf("%d", &newNode->data);
            newNode->next = head;
            head = newNode;
        }
    }
}

void pop()
{
    if (head == NULL)
    {
        printf("Stack is empty\n");
    }
    else
    {
        temp = head;
        head = head->next;
        free(temp);
    }
}

void display()
{
    node *print;
    print = head;
    printf("STACK ::: \n");
    if (head == NULL)
    {
        printf("List not created\n");
    }
    while (print != NULL)
    {
        printf("%d", print->data);
        printf("\n");
        print = print->next;
    }
}

void menu()
{
    printf("\n");
    printf("1. Push\n");
    printf("2. Pop\n");
    printf("3. Display\n");
    printf("4. Exit\n");
    printf("\n");
}

int main()
{
    int choice;
    while (1)
    {
        menu();
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
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
        case 4:
            exit(0);
            break;
        default:
            printf("Invalid choice\n");
            break;
        }
    }
    return 0;
}