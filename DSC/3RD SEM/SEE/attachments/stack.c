#include<stdio.h>
#include<stdlib.h>
#define size 5
int top=-1;
int stack[size];
void push(int val)
{
    if (top==-1)
    {
        top=0;
        stack[top]=val;
    }
    else if(top<(size-1))
    {
        ++top;
        stack[top]=val;
    }
    if(top>=(size-1))
    {
        printf("\n stack overflow\n");
        return;
    }
}
void pop()
{
    if(top==-1)
    {
        printf("\n stack underflow\n");
        return;
    }
    else if(top>=0)
    {
        printf("the popped element is %d\n",stack[top]);
        top--;
    }
}

int main()
{
    push(123);
    push(12);
    push(13);
    push(1);
    push(153);
    push(1534);
    pop();
    pop();
    pop();
    pop();
    pop();
    pop();
    pop();
    return 0;
}