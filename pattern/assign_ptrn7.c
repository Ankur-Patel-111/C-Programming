// Assignment Q-7.
#include<stdio.h>
void main()
{
	int i,j,n,t;
	for(i=0;i<6;i++)
	{
		for(j=0,t=1,n=2;j<=i;j++)
		{
			if(i%2==0)
			{
				printf("%d",t);
				t=t+2;	
			}
			else
			{
				printf("%d",n);
				n=n+2;
			}
		}
		printf("\n");
	}
}
