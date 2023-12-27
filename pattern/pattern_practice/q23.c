#include<stdio.h>
void main()
{
	int i,j,k,l=4,m;
	char ch='A';
	for(i=0;i<4;i++)
	{
		for(j=0;j<i;j++)
		{
			printf(" ");
		}
		for(k=0,ch='A',l=4,m=2;k<4-i;k++)
		{
			if(i%2==0)
			{ 
				if(i==2)
				{
					m=2;
					l=m;
					m--;
				}
				printf("%d",l);
				l--;
			}
			else
			{
				printf("%c",ch);
				ch++;
			}
		}
		printf("\n");
	}
}
