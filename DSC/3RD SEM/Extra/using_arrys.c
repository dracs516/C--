#include<stdio.h>
#include<stdlib.h>





struct Stack{
int size;
int top;
int *s;
};

void Create(struct Stack *p){
    printf("Enter the size of the Stack:");
    scanf("%d",&(p->size));
    p->top=-1;
    p->s=(int*)calloc(p->size,sizeof(int));
}

int Is_empty(struct Stack p){
   return p.top==-1?1:0;
}
int Is_full(struct Stack p){
    return p.top==p.size-1?1:0;
}



void Push(struct Stack *p){
    int x;
    printf("Enter the data to be pushed:");
    scanf("%d",&x);
    if(Is_full==0){
        printf("Stack overflow");
    }
    else{
        p->top++;
        p->s[p->top]=x;
    }
}

void Pop(struct Stack *p){
    if(Is_empty==1){
        printf("Stack Underflow");
    }
    else{
        printf("%d\n",p->s[p->top]);
        p->top--;
    }
}

void Display(struct Stack p){
    if(Is_empty==1){
        printf("Stack Under flow");
    }
    else{
        printf("The Elements of Stack are:\n");
        for(int i=p.top;i>=0;i--){
            printf("%d\n",p.s[i]);
        }
    }
}

void StackTop(struct Stack p){
    if(Is_empty==1){
        printf("The stack underflow");
    }
    else{
        printf("%d is on the top of the stack",p.s[p.top]);
    }
    
}

int main()
{
struct Stack st;
Create(&st);
printf("%d\n",Is_full(st));
Push(&st);
Push(&st);
Push(&st);
Pop(&st);
Pop(&st);
StackTop(st);
Display(st);
return 0;
}