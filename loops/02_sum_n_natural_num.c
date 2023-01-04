// Write a C program to find the sum of n term natural numbers.


#include<stdio.h>

int main()
{
	int i;
	int sum=0;
	int nterms;
	
	scanf("%d",&nterms);

	printf("The first %d natural number is : \n",nterms);
	for(i=1;i<=nterms;i++)
	{
		printf("%d ",i);
		sum +=i;
	}
	printf("\nThe Sum is Natural Number upto %d terms: %d \n",nterms,sum);
	return 0;
}
