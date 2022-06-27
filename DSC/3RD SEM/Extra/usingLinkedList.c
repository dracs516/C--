#include<stdio.h>
#include<stdlib.h>



struct node{
    int data;
    struct node *next;
}*top=NULL;

void Push(){
    int x;
    printf("Enter the data to be pushed:");
    scanf("%d",&x);
    struct node *t=malloc(sizeof(struct node));
    if(!t){
        printf("stack overflow\n");
    }
    else{
        t->data=x;
        t->next=top;
        top=t;
    }
}
void Display(struct node *p){
if(p){
printf("The Elements of the stack are:\n");
while(p){
    printf("%d\n",p->data);
    p=p->next;
}
}
else{
    printf("stack underflow\n");
}


}

void Pop(struct node *p){
    struct node *q=NULL;
    if(top==NULL){
        printf("stack underflow\n");
    }
    else{
        q=p;
        p=p->next;
        printf("%d\n",q->data);
        free(q);
    }
    
}

void Stacktop(){
    if(top){
        printf("The data on the top of stack is: %d\n",top->data);
    }else{
        printf("stack underflow\n");
    }
}
int isEmpty(){
    return top?0:1;
}


int main(){

Push();
Push();
Push();
Display(top);
Stacktop();

}