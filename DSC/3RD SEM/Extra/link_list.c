#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct node
{
    int data;
    struct node *next;
} *first = NULL, *last = NULL, *second = NULL, *last2 = NULL, *third = NULL;

void Create()
{
    struct node *t, *temp = NULL;
    printf("enter the number of nodes to be created:\n");
    int n;
    scanf("%d", &n);
    printf("Enter the data of node-1:\n");
    int num;
    scanf("%d", &num);
    first = malloc(sizeof(struct node));
    first->data = num;
    first->next = NULL;
    temp = first;
    for (int i = 1; i < n; i++)
    {
        printf("Enter the data of node-%d:\n", i + 1);
        int num;
        scanf("%d", &num);
        t = malloc(sizeof(struct node));
        t->data = num;
        t->next = NULL;
        temp->next = t;
        temp = t;
        last = t;
    }
}

void create_2()
{
    struct node *t, *temp = NULL;
    printf("Enter the number of nodes to be created:\n");
    int n;
    scanf("%d", &n);
    printf("Enter the data of node-1:\n");
    int num;
    scanf("%d", &num);
    second = malloc(sizeof(struct node));
    second->data = num;
    second->next = NULL;
    temp = second;
    for (int i = 1; i < n; i++)
    {
        printf("Enter the data of node -%d:\n", i + 1);
        scanf("%d", &num);
        t = malloc(sizeof(struct node));
        t->data = num;
        t->next = NULL;
        temp->next = t;
        temp = t;
        last2 = t;
    }
}

void Display(struct node *p)
{
    struct node *q = p;
    printf("The elements of linked list are:\n");
    while (q)
    {
        printf("%d\n", q->data);
        q = q->next;
    }
}

void Insert_first(struct node *p)
{
    printf("Enter the element to be inserted at first:\n");
    int num;
    scanf("%d", &num);
    struct node *t = malloc(sizeof(struct node));
    t->data = num;
    t->next = first;
    first = t;
}

void Insert_last(struct node *p)
{
    printf("Enter the element to be inserted at last:\n");
    int num;
    scanf("%d", &num);
    struct node *t = malloc(sizeof(struct node));
    t->data = num;
    t->next = NULL;
    if (first == NULL)
    {
        first = last = t;
    }
    else
    {
        last->next = t;
        last = t;
    }
}

void Insert(struct node *p)
{
    printf("Enter the position which the data to be inserted:\n");
    int index;
    int num;
    scanf("%d", &index);
    printf("Enter the data to be inserted:\n");
    scanf("%d", &num);
    struct node *t = malloc(sizeof(struct node));

    if (index == 0)
    {
        t->data = num;
        t->next = first;
        first = t;
    }
    else
    {
        t->data = num;
        t->next = NULL;
        for (int i = 0; i < index - 1; i++)
        {
            p = p->next;
        }
        t->next = p->next;
        p->next = t;
        p = t;
    }
}

void Sorted_insert(struct node *p)
{
    printf("Enter the value to be inserted:");
    int num;
    scanf("%d", &num);
    struct node *t = malloc(sizeof(struct node));
    t->data = num;
    t->next = NULL;
    struct node *q = NULL;
    if (first == NULL)
    {
        first = t;
    }
    else
    {
        while (p && p->data < num)
        {
            q = p;
            p = p->next;
        }
        if (p == first)
        {
            t->next = first;
            first = t;
        }
        else
        {
            t->next = q->next;
            q->next = t;
        }
    }
}

void Delete_first(struct node *p)
{
    struct node *q = first;
    int x;
    x = q->data;
    first = first->next;
    free(q);
    printf("The deleted node had:%d\n", x);
}

void Delete(struct node *p)
{
    struct node *r, *s = NULL;
    int x;
    s = p;
    printf("Enter the position of the node to be deleted:");
    int pos;
    scanf("%d", &pos);
    if (pos == 1)
    {
        Delete_first(first);
    }
    else
    {
        for (int i = 0; i < pos - 1; i++)
        {
            r = s;
            s = s->next;
        }
        x = s->data;
        r->next = s->next;
        free(s);
    }
}

void Delete_After(struct node *p)
{
    struct node *q, *temp = NULL;
    q = p;
    int x;
    printf("Enter the position of the node after which it should be deleted:");
    int pos;
    scanf("%d", &pos);
    for (int i = 0; i < pos - 1; i++)
    {
        q = q->next;
    }
    temp = q;
    q = q->next;
    temp->next = q->next;
    x = q->data;
    free(q);
    printf("The deleted node had:%d\n", x);
}

void Delete_before(struct node *p)
{
    struct node *q, *temp = NULL;
    int x;
    q = p;
    printf("Enter the position of the node before which it should be deleted:");
    int pos;
    scanf("%d", &pos);
    for (int i = 0; i < pos - 2; i++)
    {
        temp = q;
        q = q->next;
    }
    temp->next = q->next;
    x = q->data;
    printf("The deleted node had:%d\n", x);
    free(q);
}

int maxi(struct node *p)
{
    int i = 0, maxi = 0;
    while (p)
    {
        if (p->data > maxi)
        {
            maxi = p->data;
        }
        p = p->next;
    }
    return maxi;
}

void delete_maxi(struct node *p)
{
    struct node *q = NULL;
    while (p->data != maxi(first))
    {
        q = p;
        p = p->next;
    }
    q->next = p->next;
    int x = p->data;
    struct node *r = p;
    free(r);
    printf("The deleted node has the value: %d\n", x);
}

void Revrese(struct node *p)
{
    struct node *r, *q = NULL;
    while (p)
    {
        r = q;
        q = p;
        p = p->next;
        q->next = r;
    }
    first = q;
}

struct node *split_odd(struct node *p)
{
    struct node *odd = NULL;
    struct node *o = NULL;
    struct node *even = NULL;
    struct node *e = NULL;

    while (p)
    {
        if (p->data % 2 == 0)
        {
            if (even == NULL)
            {
                even = p;
                e = p;
            }
            else
            {
                e->next = p;
                e = e->next;
            }
        }
        else
        {
            if (odd == NULL)
            {
                odd = p;
                o = p;
            }
            else
            {
                o->next = p;
                o = o->next;
            }
        }
        p = p->next;
    }
    if (e)
        e->next = odd;
    if (o)
        o->next = NULL;
    if (even)
        return even;
    return odd;
}

struct node *split_positive(struct node *q)
{
    struct node *postive = NULL;
    struct node *p = NULL;
    struct node *negative = NULL;
    struct node *n = NULL;
    while (p)
    {
        if (p->data >= 0)
        {
            if (!postive)
            {
                postive = q;
                p = q;
            }
            else
            {
                p->next = q;
                p = p->next;
            }
        }
        else
        {
            if (!negative)
            {
                negative = q;
                n = q;
            }
            else
            {
                n->next = q;
                n = n->next;
            }
        }
        p = p->next;
    }
    if (p)
    {
        p->next = negative;
    }
    if (n)
    {
        n->next = NULL;
    }
    if (postive)
    {
        return postive;
    }
    else
    {
        return negative;
    }
}

void merge(struct node *p, struct node *q)
{
    struct node *l = NULL;
    if (p->data < q->data)
    {
        third = l = p;
        p = p->next;
        third->next = NULL;
    }
    else
    {
        third = l = q;
        q = q->next;
        third->next = NULL;
    }
    while (p != NULL && q != NULL)
    {
        if (p->data < q->data)
        {
            l->next = p;
            l = p;
            p = p->next;
            l->next = NULL;
        }
        else
        {
            l->next = q;
            l = q;
            q = q->next;
            l->next = NULL;
        }
    }
    if (p)
    {
        l->next = p;
    }
    else
    {
        l->next = q;
    }
    Display(first);
}

int main()
{
    Create();
    create_2();
    merge(first, second);
    // Display(first);
    // delete_maxi(first);
    // Display(first);
    // Insert_first(first);
    // Display(first);
    // Insert_last(first);
    // Display(first);
    // Insert(first);
    // Display(first);
    // Delete_first(first);
    // Display(first);
    // Delete(first);
    // Display(first);
    // Delete_After(first);
    // Display(first);
    // Delete_before(first);
    // Display(first);
    // Sorted_insert(first);
    // Display(first);
    // Revrese(first);
    // Display(first);
    // struct node *s=split_odd(first);
    // Display(s);
    // struct node *k=split_positive(first);
    // Display(k);
    // struct node *t=split_prime(first);
    // Display(t);
}