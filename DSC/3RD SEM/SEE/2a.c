// Write a C function to print middle element in a single linked list.

#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} node;

node *head;
int node_num;

void createNode(node_num)
{
    node *temp, *newNode;
    head = malloc(sizeof(node));
    if (head == NULL)
    {
        printf("Node creation failed");
    }
    else
    {
        printf("Enter data in Node 1: ");
        scanf("%d", &head->data);
        head->next = NULL;
        temp = head;

        if (node_num > 1)
        {
            for (int i = 2; i <= node_num; i++)
            {
                newNode = malloc(sizeof(node));
                if (newNode == NULL)
                {
                    printf("Node creation failed");
                }
                else
                {
                    printf("Enter data at Node %d: ", i);
                    scanf("%d", &newNode->data);
                    temp->next = newNode;
                    temp = temp->next;
                    newNode->next = NULL;
                }
            }
        }
    }
}

void display()
{
    node *print;
    print = head;
    int i = 1;
    if (head == NULL)
    {
        printf("List not created\n");
    }
    while (print != NULL)
    {
        printf("Node %d = %d", i, print->data);
        printf("\n");
        i++;
        print = print->next;
    }
}

int main()
{
    printf("\n-----------------------------------------------\n");
    printf("Enter the number of nodes u want: ");
    scanf("%d", &node_num);
    printf("\n-----------------------------------------------\n");

    createNode(node_num);
    printf("\n-----------------------------------------------\n");
    display();
    printf("\n-----------------------------------------------\n");

    int mid_num;
    node *mid_node;
    mid_node = head;
    if (node_num % 2 == 0)
    {
        mid_num = node_num / 2;
        for (int i = 1; i < mid_num; i++)
        {
            mid_node = mid_node->next;
        }
        printf("Middle elements are: %d and %d", mid_node->data, mid_node->next->data);
        printf("\n-----------------------------------------------\n");
    }
    else
    {
        mid_num = (node_num + 1) / 2;
        for (int i = 1; i < mid_num; i++)
        {
            mid_node = mid_node->next;
        }
        printf("Middle element is: %d", mid_node->data);
        printf("\n-----------------------------------------------\n");
    }
}