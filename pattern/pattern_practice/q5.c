#include<stdio.h>
void main()
{
	char ch='A';
	int i,j;
	for(i=0;i<5;i++)
	{
		for(j=0,ch='A';j<=i;j++)
		{
			if(j%2==0)
			{
				printf("%c",ch);
			}				
			else
			{
				printf("*");
				ch=ch+2;
			}

		}
		printf("\n");
	}
}
