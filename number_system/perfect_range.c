#include<stdio.h>
void main()
{
	int i,sum=0,num,j;
	for(i=1;i<=500;i++)
	{
		for(j=1,sum=0;j<i;j++)
		{
			if(i%j==0)
			{
				sum=sum+j;
			}
		}
		if(sum==i)
		{
			printf("perfect number = %d\n",sum);
		}
	}
}

