#include<stdio.h>
void main()
{
	int i,j,k,l,n,m;

	scanf("%d",&n);	
	for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			printf(" ");
		}
		for(k=0;k<n-i;k++)
		{
			if(i%2==0){
				printf(" *");
			}
		
			else
			{
                     
			printf(" %d",l);
                         
				l--;
			}
		m=k;
		}
		l=m;
		printf("\n");
	}


}
