#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define size 100

int top = -1;
char stack[size];

void push(char item)
{
    if (top >= size - 1)
    {
        printf("Stack Overflow");
    }
    else
    {
        top = top + 1;
        stack[top] = item;
    }
}

char pop()
{
    char item;
    if (top < 0)
    {
        printf("Stack empty");
        exit(1);
    }
    else
    {
        item = stack[top];
        top = top - 1;
        return item;
    }
}

int isOperator(char checkOp)
{
    if (checkOp == '^' || checkOp == '*' || checkOp == '/' || checkOp == '+' || checkOp == '-')
        return 1;
    else
        return 0;
}

int checkPrecedence(char op)
{
    if (op == '^')
        return 3;
    else if (op == '*' || op == '/')
        return 2;
    else if (op == '+' || op == '-')
        return 1;
    else
        return 0;
}

void infixToPostfix(char infix[], char postfix[])
{
    char popped, item;
    int i = 0, j = 0;
    push('(');
    strcat(infix, ')');
    item = infix[i];
    while (item != '\0')
    {
        if (item == '(')
        {
            push(item);
        }
        else if (isdigit(item) || isalpha(item))
        {
            postfix[j] = item;
            j++;
        }
        else if (isOperator(item) == 1)
        {
            popped = pop();
            while (isOperator(popped) == 1 && checkPrecedence(popped) >= checkPrecedence(item))
            {
                postfix[j] = popped;
                j++;
                popped = pop();
            }
            push(popped);
            push(item);
        }
        else if (item == ')')
        {
            popped = pop();
            while (popped != '(')
            {
                postfix[j] = popped;
                j++;
                popped = pop();
            }
        }
        else
        {
            printf("\nInvalid Expression");
            exit(1);
        }
        i++;
        item = infix[i];
    }
    postfix[j] = '\0';
}

int main()
{
    char infix[size], postfix[size];
    printf("Enter a valid infix expression: ");
    gets(infix);
    infixToPostfix(infix, postfix);
    printf("\nEquivalent postfix expression is %s", postfix);
    return 0;
}