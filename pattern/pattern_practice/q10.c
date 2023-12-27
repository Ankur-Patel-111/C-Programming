#include<stdio.h>
void main()
{
	int i,j,k;
	char ch='A',t;
	for(i=0,ch='A';i<6;i++)
	{
		for(j=0,t=ch;j<=4-i;j++)
		{
			printf(" ");
		}
		for(k=0,t=ch;k<i;k++)
		{
			if(i%2==0)
			{
				printf("%c",t);
				t=t+1;
			}
			else
			{
				printf("#");
			}
		}
		printf("\n");
	}



}

