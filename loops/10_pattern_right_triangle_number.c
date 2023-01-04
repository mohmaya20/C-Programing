// Write a program in C to display the pattern like right angle triangle with a number.

/*
*
*	The pattern like :
*
*	1
*	12
*	123
*	1234
*
*/

#include<stdio.h>


int main()
{
	int i;
	int j;
	int row;
	printf("Enter the number of Row : ");
	scanf("%d",&row);
	
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=i;j++)
			printf("%d",j);
		printf("\n");
	}

	return 0;
}
