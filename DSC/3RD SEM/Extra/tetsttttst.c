#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;

} ab;

ab *head, *n, *temp, *endtracker, *secondlasttracker, *new;
void setdata()
{
    printf("it is assumed that the inserted data is sorted so please enter the data in a sorted manner \n");
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
        secondlasttracker = temp;
        temp = temp->next;
    }
    printf("\n");
    temp = head;
}
void ask()
{
    new = malloc(sizeof(ab));

    printf("enter the data you want to input\n");
    scanf("%d", &new->data);
    new->next = NULL;
}
void check_and_put()
{
    ab *ran;
    ran = temp;
    temp = temp->next;
    if (new->data < ran->data)
    {
        new->next = ran;
    }
    else
    {
        while (ran != NULL)
        {

            if (temp->data > new->data)
            {
                new->next = temp;
                ran->next = new;
                break;
            }
            ran = temp;
            temp = temp->next;
        }
    }
    temp = head;
}

int main()
{
    setdata();
    getdata();
    ask();
    check_and_put();
    getdata();
}