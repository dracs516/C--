#include<stdio.h>
int main()
{
	char str[100];
	char *p;
	int cCount,wCount, i;
	
	
	printf("Enter any string: ");
	fgets(str, 100, stdin);
	
	
	p=str;
	cCount =0;
	wCount= 0;
	
	
	printf("The input string is: ");

	while(*p != '\0')
	{
		printf("%c", *p++);
		cCount++;
	}
	printf ("\nThe number of characters is: %d",cCount-1);
	
	for (i=0;str[i] != '\0'; i++)
	{
		if (str[i] == ' ' && str[i+1] != ' ')
		{
			wCount++;
		}
	}
	printf ("\nThe number of words is: %d",wCount+1);
	
	return 0; 
}