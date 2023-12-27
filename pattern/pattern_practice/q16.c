#include<stdio.h>
void main()
{
	int i,j,k=1,l=1;
	for(i=0;i<6;i++)
	{
		for(j=0,k=1;j<6-i;j++,k++)
		{               
			{
				printf("%d ",k);
				k=k+1;

			}


		}
		printf("\n");
	}
}
