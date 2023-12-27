#include<stdio.h>
void main()
{
	int i,j,k;
	char ch='A';
	for(i=1;i<=5;i++)
	{
		for(j=5;j>=i;j--)
		{
			if(i%2)
			{
				printf("%c ",ch);
			//	ch=ch+1;
			        ch=ch+1;	
			}
			else
			{
				printf("%d ",k);
			//	k++;
                                k=k+1;
			}
		}
		printf("\n");
	}
}
