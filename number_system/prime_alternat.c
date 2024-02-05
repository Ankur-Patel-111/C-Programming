// prime alternat number.
#include<stdio.h>
int prime_alternat(int num)
{
	int i;
	for(i=2;i<num;i++)
	{
		if(num%i==0)
			break;
	}
	if(num==i)
		return 1;
	else
		return 0;
}
void main()
{
	int i,flag=1;
	for(i=1;i<=1000;i++)
	{
		if(prime_alternat(i))
		{
			if(flag)
				printf(" %d",i);
			// printf("\n");
			flag=!flag;
		}
	}
}
