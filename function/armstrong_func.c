// armstrong number usign function.
#include<stdio.h>
int armstrong_num(int);
void main()
{
	int num,b;
	printf("Enter the number:\n");
	scanf("%d",&num);

	b=armstrong_num(num);
	if(b==num)
	{
		printf("Armstrong number:\n");
	}
	else
		printf("Not Armstrong number:\n");
}

int armstrong_num(int n)
{
	int temp,r,sum=0;
	temp=n;
	for(temp;temp;temp=temp/10)
	{
		r=temp%10;
		sum=sum+(r*r*r);
	}
	printf("%d\n",sum);

	printf("%d\n",r);
	if(n==sum)
		return sum;
}



