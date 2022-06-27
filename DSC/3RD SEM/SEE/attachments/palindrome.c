#include<stdio.h>
#include<stdlib.h>
typedef struct node 
{
    char data;
    struct node *next;
    struct node *prev;
}ab;
ab *head,*tail,*temp;
void insert()
{
    head=malloc(sizeof(ab));
    scanf("%c",&head->data);
    head->next=NULL;
    head->prev=NULL;
    temp=head;
    for(int i=1;i<5;i++)
    {
        fflush(stdin);
        temp->next=malloc(sizeof(ab));
        scanf("%c",&temp->next->data);
        temp->next->next=NULL;
        temp->next->prev=temp;
        temp=temp->next;

        tail=temp;

    }
    temp=head;


}
void pali()
{
    while(head!=tail)
    {
        if(head->data!=tail->data)
        {
            printf("tis not palindrome\n");
        exit(1);
        }
        else
        {
            head=head->next;
            tail=tail->prev;
        }
    }
            printf("it is palindrome\n");
}
void print()
{
    while(temp!=NULL)
    {
        printf("%c->",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
    temp=head;
}
int main()
{
    insert();
    print();
    pali();
    return 0;
}
