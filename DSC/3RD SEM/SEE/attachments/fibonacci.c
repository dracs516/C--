#include<stdio.h>
//0 1 1 2 3 5 8 13......
int fib(int a)
{
    if(a==0)
    return 0;
    if(a==1)
    return 1;
    else
    return fib(a-2)+fib(a-1);
}
int main()
{
int a;
printf("enter the total number of elements you want in a fibonacci series\n");
scanf("%d",&a);
for(int i=0;i<a;i++)
{

printf("%d ",fib(i));
}
    return 0;
}