// Write C program to check whether the given string is palindrome using double linked list(Each character in string is stored in a node).

#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    char data;
    struct node *prev, *next;
} node;

node *head, *last, *temp;

void insert()
{
    node *newNode;
    head = malloc(sizeof(node));
    scanf("%c", &head->data);
    head->next = NULL;
    head->prev = NULL;
    temp = head;

    for (int i = 1; i < 5; i++)
    {
        fflush(stdin);
        newNode = malloc(sizeof(node));
        scanf("%c", &newNode->data);
        newNode->next = NULL;
        newNode->prev = temp;
        last = newNode;
        temp->next = newNode;
        temp = temp->next;
    }
    temp = head;
}

void isPalindrome()
{
    while (temp != NULL)
    {
        if (temp->data != last->data)
        {
            printf("Not Palindrome");
            exit(1);
        }
        else
        {
            temp = temp->next;
            last = last->prev;
        }
    }
    printf("Palindrome");
}

void display()
{
    node *print;
    print = head;
    while (print != NULL)
    {
        printf("%c\n", print->data);
        print = print->next;
    }
}

int main()
{
    insert();
    isPalindrome();
}