#include<stdio.h>
void main()
{
	int i,j,k,l=1,t;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf(" ");
		}
		for(k=1;k<=6-i;k++)
		{
			printf("%d",l);
			l=l+2;
			if(k==1)
			t=l;
		}
		l=t;
		printf("\n");
	}
}
