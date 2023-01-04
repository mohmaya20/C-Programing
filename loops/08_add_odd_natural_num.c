// Write a program in C to display the n terms of odd natural number and their sum . 


#include<stdio.h>

int main()
{

	int i;
	int num;
	int sum=0;
	int temp_num;
	printf("Input number of terms : ");
	scanf("%d",&num);
	temp_num=num;
	for(i=0;i<temp_num;i++)
	{
		if((i+1)%2!=0)
		{
			printf("%d ", i+1);
			sum =(i+1)+sum;
		}
		else
		{
			temp_num++;
		}
	}
	printf("\nThe Sum of odd Natural Number upto %d terms : %d \n",num,sum);

	return 0;
}
