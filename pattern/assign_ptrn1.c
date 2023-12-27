#include<stdio.h>
void main()
{
	int i,j,k,l,m,n;
	for(i=0;i<6;i++)
	{

		for(j=0;j<5-i;j++)
		{
			printf(" ");
		}

		for(k=0;k<i+1;k++)
		{
			printf("* ");
		}
		printf("\n");
	}

	///   second part print loop.
	for(l=0;l<5;l++)
	{
		for(m=0;m<=l;m++)
		{
			printf(" ");
		}
		for(n=0;n<5-l;n++)
		{
			printf("* ");
		}
                printf("\n");
	}
}

