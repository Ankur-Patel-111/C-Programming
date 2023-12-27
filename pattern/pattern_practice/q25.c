#include<stdio.h>
void main()
{
	int i,j,k;
	char ch='A';
	for(i=0;i<6;i++)
	{
		for(j=0;j<i;j++)
		{
			printf(" ");
		}
		for(k=0,ch='A';k<6-i;k++)
		{
			printf(" %c",ch);
			ch++;
		}
ch='A';
ch++;
		printf("\n");
	}
}
