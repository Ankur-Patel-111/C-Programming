#include<stdio.h>
void main()
{
	int i,j,k;
	for(i=0;i<4;i++)
	{
		for(j=0;j<4-i;j++)
		{
			printf(" ");
		}
		for(k=0;k<=2*i;k++)
		{
			printf("*");
		}
		printf("\n");
	}


}