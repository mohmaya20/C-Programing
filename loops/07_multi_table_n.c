// Write a program in C to display the multiplication table vertically from 1 to n.


#include<stdio.h>

int main()
{
	int i;
	int num;
	int j=1;

	printf("Input upto the table number starting from 1 : ");
	scanf("%d",&num);
	printf("Multiplication table from 1 to %d \n",num);

	for(i=1;i<=10;i++)
	{
		while(j<=num)
		{

			printf("%d X %d = %d", j , i , j*i);
			j++;
			if(j<=num)
			{
				printf(", ");
			}
		}
		j=1;
		printf("\n");
	}
	
	return 0;
}
