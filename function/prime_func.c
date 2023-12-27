// find prime number using function.
#include<stdio.h>
void prime_number(int);
void main()
{
	int num;
	printf("Enter the number:\n");
	scanf("%d",&num);
	prime_number(num);

}
void prime_number(int n)
{
	int i;
	for(i=2;i<=n;i++)
	{
		if(n%i==0)
			break;
	}
	if(n==i)
	{
		printf("Number is prime:\n");
	}
	else
		printf("Number is not prime:\n");

}
