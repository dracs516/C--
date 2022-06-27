#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
} ab;
ab *head, *n, *temp, *endtracker, *secondlasttracker;
void setdata()
{
    int a;
    printf("how many nodes you want to put?\n");
    scanf("%d", &a);
    head = malloc(sizeof(ab));
    printf("enter the data you want to input\n");
    scanf("%d", &head->data);
    head->next = NULL;
    temp = head;
    for (int i = 1; i < a; i++)
    {
        n = malloc(sizeof(ab));
        printf("enter the data you want to input \n");
        scanf("%d", &n->data);
        n->next = NULL;
        secondlasttracker = temp;
        temp->next = n;
        temp = temp->next;
    }
    endtracker = temp;
    temp = head;
}
void getdata()
{
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
    temp = head;
}
void insertbeg()
{
    ab *newnode;
    newnode = malloc(sizeof(ab));
    printf("Enter the value of the newnode\n");
    scanf("%d", &newnode->data);
    newnode->next = NULL;
    newnode->next = head;
    temp = newnode;
}
void insertend()
{
    ab *newnode;
    newnode = malloc(sizeof(ab));
    printf("Enter the value of the newnode\n");
    scanf("%d", &newnode->data);
    newnode->next = NULL;
    endtracker->next = newnode;
    secondlasttracker = endtracker;
    endtracker = newnode;
}
void delbeg()
{
    ab *ran;
    ran = temp;
    temp = temp->next;
    ran->next = NULL;
}
void delend()
{
    ab *ran;
    secondlasttracker->next = NULL;
    while (temp != NULL)
    {
        secondlasttracker = temp;
        temp = temp->next;
    }
}
void delete ()
{
    char f, g;
    printf("do you want to delete a node or not??\n");
    scanf(" %c", &f);
    if (f == 'y' || f == 'Y')
        printf("do you want to delete at the begining or at the end?\n");
    scanf(" %c", &g);
    if (g == 'b' || g == 'B')
        delbeg();
    else
        delend();
}

void insert()
{
    char d, e;
    printf("do you want to insert a data in the node or not?\n");
    scanf(" %c", &d);
    if (d == 'y' || d == 'Y')
    {
        printf(" do you want to insert at the begining or the end?\n");
        scanf(" %c", &e);
        if (e == 'b' || e == 'B')
            insertbeg();
        else
            insertend();
    }
}

int main()
{
    setdata();
    getdata();
    insert();
    delete ();
    getdata();
    delete ();
    getdata();
}