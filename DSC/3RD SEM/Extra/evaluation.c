#include <stdio.h>
int stack[20];
int top = -1;

void push(int x)
{
    stack[++top] = x;
}

int pop()
{
    return stack[top--];
}

int is_oprand(char m)
{
    if (m == '+' || m == '-' || m == '*' || m == '/')
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int eval(char *e)
{
    int n1, n2, n3, num;
    while (*e != '\0')
    {
        if (is_oprand(*e))
        {
            num = *e - 48;
            push(num);
        }
        else
        {
            n1 = pop();
            n2 = pop();
            if (*e == '+')
            {
                n3 = n1 + n2;
            }
            else if (*e == '-')
            {
                n3 = n2 - n1;
            }
            else if (*e == '*')
            {
                n3 = n1 * n2;
            }
            else if (*e == '/')
            {
                n3 = n2 / n1;
            }
            push(n3);
        }
        e++;
    }
    return pop();
}

int main()
{
    char exp[20];
    printf("Enter the expression in postfix form :: ");
    scanf("%s", exp);
    printf("\nThe result of expression %s =  %d\n", exp, eval(exp));
    return 0;
}