#include<stdio.h>
void main()
{
	int i,j,k,l=1;
        char ch='Z';
	for(i=0;i<4;i++)
	{
		for(j=0;j<4-i;j++)
		{
			printf("  ");
		}
		for(k=0;k<=2*i;k++)
		{
			printf("%c ",ch);
                        ch--;

		}
ch='Z';
		printf("\n");
	}



}
