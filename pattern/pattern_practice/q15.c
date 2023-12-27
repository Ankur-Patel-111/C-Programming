#include<stdio.h>
void main()
{
	int i,j,l=1,t=1;
	for(i=0,t=1;i<5;i++)
	{
		for(j=0,t=1,l=1;j<=i;j++)
		{ 
			if(j==4)
			{
				l=l+1;
				t=l;
				printf("%d\n",t);
			}
			else
			{
				printf("%d",t);
				t++;
			}   		                     
		}
		printf("\n");
	}
}
