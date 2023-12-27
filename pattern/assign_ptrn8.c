#include<stdio.h>
void main()
{
	int i,j,t,n,a,b,c;
	for(i=1;i<6;i++)
	{
		for(j=1,t=2,n=1,a=3,b=4,c=5;j<=i;j++)
		{
			if(i%2==0)
			{
				printf("%d",i);
				t=t+4;
                    
			}
			else
				printf("%d",n);
			n=n+3;
		}
		printf("\n");
	}
}
