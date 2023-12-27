#include<stdio.h>
void main()
{
	int i,j,k=1;
	for(i=0;i<6;i++)
	{
		for(j=0,k=1;j<6-i;j++,k=k+2)
		{
			if(i%2==0)
			{
				printf("*");
			}
			else
				printf("%d",k);

		}

		printf("\n");
	}


}
