// Design an algorithm stackequal, which checks whether the given two stacks contain equal number of elements. If true, It checks whether the two stacks contain elements in same order. Temporary stacks can be used and original stack has to be undisturbed after operations.

#include <stdio.h>

int main()
{
    int stack1_size, stack2_size, flag = 0;
    scanf("%d %d", &stack1_size, &stack2_size);
    int stack1[stack1_size], stack2[stack2_size];

    for (int i = 0; i < stack1_size; i++)
    {
        scanf("%d", &stack1[i]);
    }
    for (int i = 0; i < stack2_size; i++)
    {
        scanf("%d", &stack2[i]);
    }
    if (stack1_size != stack2_size)
    {
        printf("Not equal");
    }
    else
    {
        for (int i = 0; i < stack1_size; i++)
        {
            if (stack1[i] != stack2[i])
            {
                printf("Not equal");
                break;
            }
            else
            {
                flag++;
            }
        }
    }
    if (flag != 0)
    {
        printf("Equal");
    }
}