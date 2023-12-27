#include<stdio.h>
void main()
{
	int i,j,k,l=1;
	for(i=0;i<4;i++)
	{
		for(j=0;j<8-2*i;j++)
		{
			printf(" ");
		}
		for(k=0,l=1;k<2*i+1;k++)
		{
			if(i%2==0)
			{
				printf(" %d",l);
			        l=l+1;	
			}
			else
			{
				printf(" %d",l);
				l=l+2;
			}
		}
		printf("\n");
	}
}

