#include<stdio.h>
void main()
{
	int i,j,t=1,k=1;
	for(i=0;i<4;i++)
	{
		for(j=0;j<=2*i;j++)
		{
			printf("%d",k);
			k--;
		}
		t=t+2;
		k=t;
		printf("\n");
	}


}


