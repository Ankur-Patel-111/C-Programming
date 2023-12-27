#include<stdio.h>
void main()
{
	int i,j,k,l=0;

	for(i=0;i<9;i++)
	{
		if(i==0 || i==8)
		{
			for(j=0;j<5;j++)
				printf("*");
			//	printf("\n");
		}
		else if(i%2)
		{
			printf("\n");

		}
		else 
		{
			for(k=0;k<5;k++)
			{
				if(k==0 || k==4)
					printf("*");
				else
					printf(" ");
			}
		}

	}
printf("\n");

}
