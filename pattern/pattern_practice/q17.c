#include<stdio.h>
void main()
{
	int i,j,k=2,t=1;
	for(i=0;i<5;i++)
	{
		for(j=0,k=2;j<=i;j++)
		{ 
   if(j==0||j==1)
{
		      printf("%d ",k);
                      k=k+t;
t++;
}
		}
t=1;
		printf("\n");
	}
}
