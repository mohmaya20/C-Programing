// Write a program in C to display the cube of the number upto given an integer.


#include<stdio.h>

int main()
{
	int num,i;
	printf("Input number of terms: ");
	scanf("%d",&num);

	for(i=1;i<=num;i++)
	{
		printf("Number is : %d  and cube of the %d is : %d\n",i,i,i*i*i);
	}

	return 0;
}


