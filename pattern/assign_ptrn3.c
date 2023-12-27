//assignment-3 19-09-2023.
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
		for(k=0;k<6-i;k++)
		{
			printf("* ");
		}
		printf("\n");
	}

	// second portion logic.
	for(l=0;l<5;l++)
	{
		for(m=0;m<5-l;m++)
		{
			printf(" ");
		}
		for(n=0;n<2+l;n++)
		{
			printf("* ");
		}
		printf("\n");
	}
}

