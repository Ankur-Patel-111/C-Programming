#include<stdio.h>
int  prime_number(int );
void main()
{
	int num,i;
	printf("Enter the number\n");
	scanf("%d",&num);
i = prime_number(num);
if(num==i)
printf("Prime number\n");
else
printf("Not prime number\n");
}
int prime_number(int num)
{
	int i;
	for(i=2;i<=num;i++)
	{
		if(num%i==0)
		{
			break;
		}
	}
	if(num==i)
return i;
	//	printf("Number is prime:\n");
	else
return i;
	//	printf("Number is not prime:\n");
}

