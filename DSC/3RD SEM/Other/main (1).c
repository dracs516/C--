#include<stdio.h>



struct patient
    {
        char name[50];
        int age;
        char bloodgroup[5];
        char symptoms[25];
        char add[10];
    
    }p[10];
    
    
int main()
{
    int i,n;
    printf("Enter the information of patients:\n");
    scanf("%d",&n);
    
    for (i=0;i<n;i++)
    {
        printf("enter the name");
        scanf("%s",p[i].name);
        printf("enter the age");
        scanf("%d",&p[i].age);
        printf("enter the blood group");
        scanf("%s",p[i].bloodgroup);
        printf("enter the symptoms");
        scanf("%s",p[i].symptoms);
        printf("enter the address");
        scanf("%s",p[i].add);
}

    for (i=0;i<n;i++)
    {
      
        printf("\n\n%s",p[i].name);
        printf("\n%d",p[i].age);
        printf("\n%s",p[i].bloodgroup);
        printf("\n%s",p[i].symptoms);
        printf("\n%s",p[i].add);
}
}