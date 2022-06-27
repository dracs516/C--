#include<stdio.h>
#include<stdlib.h>
typedef struct node 
{
    int data;
    struct node *next;
}ab;
ab*head,*c,*p,*n,*temp;
void insert()
{
    int a;
    printf("enter the number of data you want to enter in the linked list\n");
    scanf("%d",&a);
    head=malloc(sizeof(ab));
    head->next=NULL;
    printf("enter the data for the first node \n");
    scanf("%d",&head->data);
    temp=head;
    for(int i=1;i<a;i++)
    {
        temp->next=malloc(sizeof(ab));
        temp->next->next=NULL;
        printf("enter the data you want to enter in the linked list\n");
        scanf("%d",&temp->next->data);
        temp=temp->next;
        // ran=temp;
    }
    temp=head;
}
void print()
{
    while(temp!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
    temp=head;
}
void reverse()
{
    c=temp;
    p=temp;
    n=temp->next;
        p->next=NULL;

    while(n!=NULL)
    {

        c=n;
        n=n->next;
        c->next=p;
        p=c;

    }
    temp=p;

}
int main()
{
    insert();
    print();
    reverse();
    print();

    return 0;
}