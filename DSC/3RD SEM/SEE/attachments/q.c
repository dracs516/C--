#include<stdio.h>
#include<stdlib.h>
#define size 5
int q[size];
int f=-1,r=-1;
void eq(int data)
{
    if(f==-1 || r==-1)
    {
        f=0;
        r=0;
        q[0]=data;
        return;
    }
    else if(f==0 && r<(size-1))
    {
        r++;
        q[r]=data;
        return;
    }
    if(f==0 && r>=(size-1))
    {
        printf("\n q full\n");
        return;
    }
    if(f!=0 &&r%(size-1)!=f)
    {
        r=(r+1)%(size-1);
        q[r]=data;
        return;

        
    }
    else if(f!=0 && r%(size-1)==f)
    {
        printf("q full\n");
        return ;
    }
}
void dq()
{
if(r==size-1 && f==r)
{
    printf("q empty\n");
    return ;
}
else if(r!=size-1 && f==r){
printf(" q empty\n");
return;}
if(f!=r)
{
    printf("the dqed element is %d\n",q[f]);
    f++;
    return;
}
}
int main()
{
    eq(123);
    eq(134);
    eq(1242);
    eq(1234);
    dq();
    eq(1);
    eq(12890);
    eq(128);
    dq();
    dq();
    dq();
    dq();
    dq();
    // printf("the dqed element is %d\n",q[f+1]);

    return 0;
}