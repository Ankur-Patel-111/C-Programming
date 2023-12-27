// assignment 4 pattern.
#include<stdio.h>
void main()
{
	int i,j,k,l,m,n;
	for(i=0;i<6;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf(" ");
		}
		for(k=0;k<11-2*i;k++)
		{
			printf("*");
		}
		printf("\n");

	}


	// second portion
	for(l=0;l<6;l++)
	{
		for(m=0;m<5-l;m++)
		{
			printf(" ");
		}
		for(n=0;n<2*l+1;n++)		
		{
			printf("*");
		}
		printf("\n");
	}

}

