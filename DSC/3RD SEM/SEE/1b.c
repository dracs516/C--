// Write a C fiunctions to perform the following operations on a single linked list
// i. Delete rear element from single linked list
// ii. Delete element at the given position
// iii. Delete alternate nodes in a single linked list

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

void del_rear()
{
    node *rear;
    rear = head;
    while (rear->next->next != NULL)
    {
        rear = rear->next;
    }
    rear->next = NULL;
    node_num--;
}

void del_pos(pos_num)
{
    node *del_pos;
    del_pos = head;
    if (pos_num == 1)
        head = head->next;
    else
    {

        for (int i = 1; i < pos_num - 1; i++)
        {
            del_pos = del_pos->next;
        }
        del_pos->next = del_pos->next->next;
    }
    node_num--;
}

void del_alternate()
{
    node *del_alternate, *alternate_node;
    del_alternate = head;
    alternate_node = head;
    while (del_alternate != NULL && alternate_node != NULL)
    {
        del_alternate = del_alternate->next->next;
        alternate_node->next = del_alternate;
        alternate_node = alternate_node->next;
    }
    free(alternate_node);
}

int main()
{
    int pos_num;
    printf("\n-----------------------------------------------\n");
    printf("Enter the number of nodes u want: ");
    scanf("%d", &node_num);
    printf("\n-----------------------------------------------\n");

    createNode(node_num);
    printf("\n-----------------------------------------------\n");
    display();
    printf("\n-----------------------------------------------\n");

    del_rear();
    printf("\n-----------------------------------------------\n");
    display();
    printf("\n-----------------------------------------------\n");

    printf("Enter the position of node u want to delete: ");
    scanf("%d", &pos_num);

    del_pos(pos_num);
    printf("\n-----------------------------------------------\n");
    display();
    printf("\n-----------------------------------------------\n");
    if (node_num >= 6)
    {

        del_alternate();
    }
    else if (node_num == 3)
    {
        del_pos(2);
    }

    else if (node_num == 5)
    {
        del_pos(4);
        del_pos(2);
    }

    else
    {
        printf("List is too small to delete alternate nodes\n");
    }
    printf("\n-----------------------------------------------\n");
    display();
    printf("\n-----------------------------------------------\n");
}