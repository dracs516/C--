// Write C program to check whether the given string is palindrome using double linked list (Each character in string is stored in a node).

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node
{
    char data;
    struct node *next, *prev;
} node;

node *list1;

node *createList()
{
    node *head;
    head = malloc(sizeof(node));
    if (head == NULL)
    {
        printf("Fail khayo");
        return NULL;
    }
    else
    {
        head->next = NULL;
        head->prev = NULL;
    }
    return head;
}

void insertChar(node *list, char data)
{
    if (list == NULL)

        list = createList();

    else

        list->data = data;
}

void display(node *list)
{
    node *print;
    print = list;
    while (print != NULL)
    {
        printf("%c\n", print->data);
        print = print->next;
    }
}
void displayReverse(node *list)
{
    node *print;
    print = list;
    while (print->next != NULL)
    {
        print = print->next;
    }
    while (print != NULL)
    {
        printf("%c\n", print->data);
        print = print->prev;
    }
}

int palindrome()
{
    node *last_node, *first_node;

    first_node = list1;
    last_node = first_node;

    while (last_node->next != NULL)
    {
        // printf("%c\n", last_node->data);
        last_node = last_node->next;
    }
    while (last_node != NULL && first_node != NULL && first_node != last_node)
    {
        if (first_node->data != last_node->data)
        {
            // When node value are not same
            return 0;
        }
        if (first_node->next == last_node)
        {
            // When get last pair
            if (first_node->data == last_node->data)
            {
                // When pair value is same
                return 1;
            }
            // When last middle node not same
            return 0;
        }
        // Visit to next node
        first_node = first_node->next;
        // Visit to previous node
        last_node = last_node->prev;
    }
    return 1;
}

int main()
{
    char a[50];
    printf("Enter string : ");
    scanf("%s", a);

    list1 = createList();
    node *temp;
    temp = list1;

    for (int i = 0; i < strlen(a); i++)
    {
        insertChar(temp, a[i]);
        temp->next = createList();
        temp->next->prev = temp;
        temp = temp->next;
    }

    // display(list1);

    // displayReverse(last_node);

    // for (int i = 0; i <= strlen(a); i++)
    // {
    //     b[i] = last_node->data;
    //     last_node = last_node->prev;
    // }

    // displayReverse(first_node);
    // displayReverse(last_node);

    // for (int i = 0; i < strlen(a); i++)
    // {
    //     if (a[i] != b[i])
    //     {
    //         printf("Not a palindrome\n");
    //         return 0;
    //     }
    // }
    // printf("Palindrome\n");

    // while (first_node != last_node && last_node != first_node->prev)
    // {
    //     if (first_node->data != last_node->data)
    //     {
    //         printf("Not a palindrome\n");
    //         return 0;
    //     }
    //     first_node = first_node->next;
    //     last_node = last_node->prev;
    // }
    // printf("Palindrome\n");

    if (palindrome() == 1)
    {
        printf("\nYes\n");
    }
    else
    {
        printf("\nNo\n");
    }
}