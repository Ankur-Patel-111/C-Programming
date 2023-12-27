// pattern 5 digit and * .
#include<stdio.h>
void main()
{
	int i,j,k,l,m,n;
	for(i=1;i<6;i++)
	{
		for(j=0;j<2*i-1;j++)
		{
			if(j%2==0)
			{
				printf("%d",i);
			}
			else
				printf("*");
		}
		printf("\n");
	}

	for(l=4;l>0;l--)
	{
		for(m=0;m<2*l-1;m++)
		{
			if(m%2==0)
			{
				printf("%d",l);
			}
			else
				printf("*");
		}
		printf("\n");
	}
}
