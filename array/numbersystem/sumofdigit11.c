// sum of digit repet
#include<stdio.h>
void main()
{
	int num,sum=0;
	printf("Enter the number\n");
	scanf("%d",&num);
	for(num,sum=0;num;num=num/10)
	{
		sum=sum+num%10;
	}
	printf("Sum = %d",sum);
	printf("\n");

}
