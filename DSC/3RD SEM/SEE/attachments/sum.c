#include<stdio.h>
    int d=0;
void sum(int a)
{
    if(a==0)
    {
        printf("%d",d);
        return ;
    }
    else
    {
        d=(a%10)+d;
        sum(a/10);

    }
}
int main()
{
    int a;
    a=1243;
    sum(a);
    return 0;
}