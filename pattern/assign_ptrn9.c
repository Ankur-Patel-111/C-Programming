#include<stdio.h>
void main()
{
	int i,j,k,l=1,m=1;
	for(i=0;i<5;i++)
	{
		for(j=0;j<8-2*i;j++)
		{
			printf(" ");
		}
		for(k=0,m=1;k<2*i+1;k++)
		{
			printf(" %d",m);
			l=l+1;
                        m=l;

			//printf("%d\n",l);
		}
m++;
		printf("\n");
	}
}
