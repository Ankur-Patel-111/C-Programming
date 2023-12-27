// sum of digit.
#include<stdio.h>
void main()
{
	int num,sum=0,r,i;
	printf("Enter the number\n");
	scanf("%d",&num);

	for(i=0;i<=num;i++)
	{
		r=num%10;
		sum=sum+r;
		num=num/10;
	}
	printf("sum=%d\n",sum);
}
