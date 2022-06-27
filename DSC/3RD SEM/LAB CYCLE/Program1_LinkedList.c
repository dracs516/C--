// Develop a program to create a singly linked list by adding each node at the end and delete a node at the beginning

#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} node;

node *head;

void createNode()
{
    node *newNode, *temp;
    int node_num;
    printf("Enter the number of nodes you want: ");
    scanf("%d", &node_num);
    if (node_num <= 0)
    {
        printf("Enter a valid node number...");
    }
    else
    {
        head = malloc(sizeof(node));
        if (head == NULL)
        {
            printf("Node Creation Failed... .. .");
        }
        else
        {
            printf("Enter the data at Node 1: ");
            scanf("%d", &head->data);
            head->next = NULL;
            temp = head;
        }

        if (node_num > 1)
        {
            newNode = malloc(sizeof(node));
            if (newNode == NULL)
            {
                printf("Node Creation Failed... .. .");
            }
            else
            {
                for (int i = 2; i <= node_num; i++)
                {
                    printf("Enter the data at Node %d: ", i);
                    scanf("%d", &newNode->data);
                    newNode->next = NULL;
                    temp->next = newNode;
                    temp = temp->next;
                }
            }
        }
    }
}

void display()
{
    node *print = head;
    int i = 1;
    while (print->next != NULL)
    {
        printf("Node %d= %d", i, print->data);
        print = print->next;
        i++;
        printf("\n");
    }
}
// void nodeAtBeginning();
// void deleteAtEnd();

int main()
{
    int option_num;
    printf("Enter the option number: \n1. Create Singly Linked List\n2. Add node at the beginning\n3. Delete at the end\n4. Display\n5.END\n");
    scanf("%d", &option_num);
    switch (option_num)
    {
    case 1:
        createNode();
        break;
    case 2:
        // nodeAtBeginning();
        break;
    case 3:
        // deleteAtEnd();
    default:
        break;
    }
    display();
    return 0;
}