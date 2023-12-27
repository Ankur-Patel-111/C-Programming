#include<stdio.h>
void main()
{
	int i,j,k,l,m,n;
        char ch='A';
	for(i=0;i<5;i++)
	{
		for(j=0;j<4-i;j++)
		{
			printf(" ");
		}
		for(k=0,ch='A';k<=1*i;k++)
		{
			printf(" %c",ch);
                        ch++;
		}

		printf("\n");
	}

	for(l=0;l<4;l++)
	{
		for(m=0;m<=l+1;m++)
		{
			printf(" ");
		}
		for(n=0,ch='A';n<4-l;n++)
		{
			printf("%c ",ch);
                        ch++;
		}
		printf("\n");
	}
}
