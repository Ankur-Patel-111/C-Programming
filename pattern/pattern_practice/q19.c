#include<stdio.h>
void main()
{
	int i,j,k;
        char ch='Z';
	for(i=0;i<5;i++)
	{
		for(k=0;k<8-i*2;k++)
		{
			printf(" ");
		}
		for(j=0;j<=i;j++)
		{
			printf(" %c",ch);
			ch--;
		}
ch='Z';
		printf("\n");
	}


}
