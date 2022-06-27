#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
}ab;
 
void getdata(ab *a){
    printf("enter the data you want to input in the node\n");
    scanf("%d",&a->data);
    a->next=NULL;
}
void print(ab *c){
    ab *ran;
    ran=c;
    while(ran!=NULL){
        printf("%d  ",ran->data);
        ran=ran->next;
    }}
void push(ab *temp,ab *nt){
    ab *newest;
    nt=temp;
    newest=malloc(sizeof(ab));
    printf("enter the value you want to input in the linked list as the stack logic\n");
    scanf("%d",&newest->data);
    newest->next=NULL;
    temp->next=newest;
    temp=temp->next;
 
 
}
void pop(ab *temp,ab *nt,ab *head){
    ab *check;
    check=head;
    printf("the popped element is %d\n",temp->data);
    nt->next=NULL;
    while(check !=NULL){
    print(check);
    check=check->next;
    }}
int main ()
{
    char b;
    int n;
    printf("enter the total number of nodes you want\n");
    scanf("%d",&n);
ab *head ,*new,*temp,*nt;
  head=malloc(sizeof(ab));
  getdata(head);
  temp=head;
for(int i=1;i<=n;i++){
    new=malloc(sizeof(ab));
    getdata(new);
    temp->next=new;
    temp=temp->next;
}
print(head);
//fflush(stdin);
 
printf("\ndo you want to add another value in the node or not?\n");
 
scanf(" %c",&b);
if(b=='y' || b=='Y'){
push(temp,nt);}
else {
printf("\ni know you dont want to push anything so i shall not ask you for anything\n");}
print(head);
char e;
printf("do you want to pop ?\n");
scanf(" %c",&e);
if(e=='y'||e=='Y'){
    pop(temp,nt,head);
}
else 
printf("thank you for the input i have understood stacks using linked list\n");
print(head);
return 0;
}