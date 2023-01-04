// Write a C program to find the sum of first 10 natural numbers.


#include<stdio.h>

int main()
{
	int i;
	int sum=0;
	printf("The first 10 natural number is : \n");
	for(i=1;i<=10;i++)
	{
		printf("%d ",i);
		sum +=i;
	}
	printf("\nThe Sum is : %d \n",sum);
	return 0;
}
