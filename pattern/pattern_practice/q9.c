#include<stdio.h>
void main()
{
	char ch='A',t;
	int i,j,k,l=1;
	for(i=0,ch='E';i<5;i++,ch--)
	{
		for(j=0,l=1;j<=4-i;j++)
		{
			printf(" ");
		}
		for(k=0,t=ch;k<=i;k++,t++)
		{
			if(i%2==0)
			{
				printf("%c",t);

			}
			else
			{
				printf("%d",l);
				l=l+1;
			}

		}
		printf("\n");
	}
}

