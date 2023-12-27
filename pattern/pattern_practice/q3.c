#include<stdio.h>
void main()
{
	int i,j,n=1;
	for(i=1;i<=6;i++)
	{
		for(j=1,n=1;j<=7-i;j++)
		{
			printf("%d",n);
			n=n+1;
		}
		printf("\n");
	}


}
