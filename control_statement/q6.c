// Write a c program first 100 prime numbers.
#include<stdio.h>
void main()
{
	int i,j;
	for(i=0;i<=100;i++)
	{
		for(j=2;j<i;j++)
		{
			if(i%j==0)
				break;
		}

		if(j==i)

			printf("prime number %d\n",j);
	}

}
