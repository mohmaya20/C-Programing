// Write a program in C to display the multiplication table of a given integer.


#include<stdio.h>

int main()
{
	int i;
	int num;

	printf("Input the number(Table to calculated) : ");
	scanf("%d",&num);
	for(i=1;i<=10;i++)
	{
		printf("%d X %d = %d\n",num , i , num*i);
	}
	
	return 0;
}
