#include<stdio.h>
void main()
{
	int i,j,n=2;
	for(i=1;i<=5;i++)
	{
		for(j=1,n=2;j<=i;j++)
		{
			printf("%d",n);
			n=n+2;
		}
		printf("\n");
	}



}
