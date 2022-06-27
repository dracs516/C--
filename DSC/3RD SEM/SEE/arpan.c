#include <stdio.h>
int q[5];
int f = -1;
int r = -1;
void eq(int val)
{
    if (f == -1 || r == -1)
    {
        f = 0;
        r = 0;
        q[r] = val;
        return;
    }
    else if (r < (5 - 1))
    {
        r++;
        q[r] = val;
        return;
    }
    else
    {
        printf("\n q full\n");
        return;
    }
}
void dq()
{
    if (f == -1)
    {
        printf("\n q underflow\n");
        return;
    }
    else if (f < r)
    {
        printf("the popped element is %d\n", q[f]);
        f++;
        return;
    }
    if (f == r)
    {
        printf("the popped element is %d\n", q[f]);
        f = -1, r = -1;
    }
}
int main()
{
    eq(123);
    eq(1);
    dq();
    dq();
    eq(3);
    eq(13);
    eq(12);
    eq(41);
    eq(4352);
    dq();
    dq();
    dq();
    dq();
    dq();
    dq();
    dq();
    eq(4352);
    dq();

    return 0;
}