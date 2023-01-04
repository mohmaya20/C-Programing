// Write a program in C to make such a pattern like right angle triangle with a number which will repeat a number in a row.

/*
*	The pattern like :
*
* 	1
* 	22
* 	333
* 	4444
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
			printf("%d",i);
		printf("\n");
	}

	return 0;
}
