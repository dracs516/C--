// Write a C function to print middle element in a single linked list.

#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} node;

node *head, *temp;
int node_num;

void createNode(int node_num)
{
    node *newNode;
    head = malloc(sizeof(node));
    if (head == NULL)
        printf("Node Creaiton failed");
    else
    {
        printf("Insert at node 1: ");
        scanf("%d", &head->data);
        head->next = NULL;
        temp = head;
    }

    for (int i = 2; i <= node_num; i++)
    {
        newNode = malloc(sizeof(node));
        printf("Insert at node %d: ", i);
        scanf("%d", &newNode->data);
        newNode->next = NULL;
        temp->next = newNode;
        temp = temp->next;
    }
}

void display_middle(node_num)
{
    int mid_part = node_num;
    node *mid_node = head;
    if (node_num % 2 == 0)
    {
        int mid_count = 1;
        mid_part = mid_part / 2;
        for (int i = 1; i < mid_part; i++)
        {
            mid_node = mid_node->next;
        }
        printf("The middle nodes are %d and %d", mid_node->data, mid_node->next->data);
    }
    else
    {
        int mid_count = 1;
        mid_part = mid_part / 2;
        for (int i = 1; i < mid_part; i++)
        {
            mid_node = mid_node->next;
        }
        mid_node = mid_node->next;
        printf("The middle node is %d\n", mid_node->data);
    }
}

void display()
{
    node *print;
    print = head;
    int i = 1;
    while (print != NULL)
    {
        printf("Node %d = %d\n", i, print->data);
        print = print->next;
        i++;
    }
}

int main()
{
    int option_num;
    while (1)
    {
        printf("1. Create\n");
        printf("2. Print middle elements\n");
        printf("3. Display\n");
        scanf("%d", &option_num);
        switch (option_num)
        {
        case 1:
            printf("Enter the number of nodes you want: ");
            scanf("%d", &node_num);
            createNode(node_num);
            break;
        case 2:
            display_middle(node_num);
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