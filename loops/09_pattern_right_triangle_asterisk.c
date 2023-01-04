// Write a program in C to display the pattern like right angle triangle using an asterisk.

/*

   The pattern like :

	*
	**
	***
	****
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
		for(j=0;j<i;j++)
			printf("*");
		printf("\n");
	}

	return 0;
}
