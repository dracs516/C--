#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
char stack[100];
int top = -1;
void push(char item)
{
    if (top < 99)
    {
        top++;
        stack[top] = item;
        return;
    }
}
char pop()
{
    if (top == -1)
    {
        printf("stack empty\n");
        return '\0';
    }
    else
    {
        char d = stack[top];
        top--;
        return d;
    }
}
int chck(char item)
{
    if (item == '^')
        return 3;
    else if (item == '*' || item == '/')
        return 2;
    else if (item == '+' || item == '-')
        return 1;
    else
        return 0;
}
int isop(char item)
{
    if (item == '*' || item == '/' || item == '+' || item == '-' || item == '^')
        return 1;
    else
        return 0;
}
void conv(char *infix, char *postfix)
{
    char in;
    char fs;
    int i = 0, j = 0;
    push('(');
    strcat(infix, ")");
    in = infix[i];
    while (in != '\0')
    {
        if (in == '(')
            push(in);
        if (isdigit(in) || isalpha(in))
        {
            postfix[j] = in;
            j++;
        }
        else if (isop(in) == 1)
        {

            fs = pop();
            while (chck(in) <= chck(fs))
            {
                postfix[j] = fs;
                fs = pop();
                j++;
            }
            push(fs);
            push(in);
        }
        if (in == ')')
        {
            fs = pop();
            while (fs != '(')
            {
                postfix[j] = fs;
                j++;
                fs = pop();
            }
        }
        i++;
        in = infix[i];
    }
    postfix[j] = '\0';
}

int main()
{
    char infix[100], postfix[100];
    gets(infix);
    conv(infix, postfix);
    printf("%s \n", postfix);
    return 0;
}