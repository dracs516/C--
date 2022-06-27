#include<stdio.h>
#include<stdlib.h>
typedef struct node 
{
    int data;
    struct node *next;
}ab;
ab*head,*ran,*temp;
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
    }
    temp=head;
}
void deleteatval(int val)
{
while(temp->data!=val)
{
    ran=temp;
    temp=temp->next;
}
ran->next=temp->next;
temp->next=NULL;
free(temp);
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
int main()
{
    insert();
    print();

    deleteatval(34);
    print();
    return 0;
}