// Write a program in C to read 10 numbers from keyboard and find their sum and average. 


#include<stdio.h>


int main()
{
	int i;
	int num;
	int sum=0;
	for(i=1;i<=10;i++)
	{
		printf("Number-%d :",i);
		scanf("%d",&num);
		sum +=num;
	}
	
	printf("The Sum of 10 no is: %d\n",sum);
	printf("The Average is : %f\n",(float)(sum/10));
       	return 0;
}


