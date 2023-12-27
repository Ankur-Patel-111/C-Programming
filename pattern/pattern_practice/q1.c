#include<stdio.h>
void main()
{
	int i,j,n=1;
	for(i=1;i<=4;i++)
	{
		for(j=1,n=1;j<=i;j++)
		{
			printf("%d",n);
			n=n+2;
		}

		printf("\n");
	}
}		




