#include <stdio.h>

int sum(int n)
{
    if (n == 0)
    {
        return 0;
    }

    return n + sum(n - 1);
}

int main()
{
    int n;
    printf("Calculate the sum of numbers till ::::: ");
    scanf("%d", &n);
    printf("the sum is::::: %d", sum(n));
    printf("\n");
    return 0;
}