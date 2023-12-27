#include<stdio.h>
void main()
{
	int i,j,k,l,m,n,p,q;
	for(i=0;i<5;i++)
	{
		for(j=0;j<4-i;j++)
		{
			printf(" ");
		}
		for(k=0,p=1;k<2*i+1;k++)
		{
			printf("%d",p);
                        p++;
		}
		printf("\n");
	}
	for(l=0;l<4;l++)
	{
		for(m=0;m<1+l;m++)
		{
			printf(" ");
		}
		for(n=0,q=1;n<7-l*2;n++)
		{
			printf("%d",q);
     			q++;
		}
		printf("\n");
	}
}
