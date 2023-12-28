#include<stdio.h>
void main()
{
	int num,sum=0,temp,r;
	printf("Enter the number\n");
	scanf("%d",&num);
	temp=num;
	for(num;num;num=num/10)
		//while(num)
	{
		r=num%10;
		sum=sum+(r*r*r);
	}
	if(temp==sum)
		printf("Armstrong number\n");
	else
		printf("Not Armstrong number\n");
}
