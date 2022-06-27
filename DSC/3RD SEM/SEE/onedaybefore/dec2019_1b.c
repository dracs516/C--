// Write a C fiunctions to perform the following operations on a single linked list 10
// i.Delete rear element from single linked list
//     ii.Delete element at the given position
//         iii.Delete alternate nodes in a single linked list

#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} node;

node *head, *temp;

void createNode()
{
    int node_num;
    node *newNode;

    printf("Enter the number of nodes you want: ");
    scanf("%d", &node_num);

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

void delete_rear()
{
    node *last_node, *second_last_node;
    last_node = head;
    while (last_node->next != NULL)
    {
        second_last_node = last_node;
        last_node = last_node->next;
    }
    second_last_node->next = NULL;
    free(last_node);
}

void delete_at_position()
{
    int node_position;
    node *positioned_node, *second__;
    positioned_node = head;
    printf("Insert position to delete: ");
    scanf("%d", &node_position);
    for (int i = 1; i < node_position; i++)
    {
        second__ = positioned_node;
        positioned_node = positioned_node->next;
    }
    second__->next = positioned_node->next;
}

void delete_alternate()
{
    node *start, *end;
    start = head;
    end = head;
    while (start != NULL || end != NULL)
    {
        end = end->next;
        start->next = end->next;
        end = end->next;
        start = end;
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
        printf("2. Delete at rear\n");
        printf("3. Delete at position\n");
        printf("4. Delete alternate nodes\n");
        printf("5. Display\n");
        scanf("%d", &option_num);
        switch (option_num)
        {
        case 1:
            createNode();
            break;
        case 2:
            delete_rear();
            break;
        case 3:
            delete_at_position();
            break;
        case 4:
            delete_alternate();
            break;
        case 5:
            display();
            break;
        default:
            break;
        }
    }
    return 0;
}