#include<stdio.h>
void main()
{
	int i,j,l=5;
	for(i=0;i<5;i++)
	{
		for(j=0,l=5;j<=i;j++)
		{
			if(i%2==0)
			{
				printf("%d",l);
				l=l-1;
			}
			else
			{
				printf("*");

			}
		}
		printf("\n");
	}
}
