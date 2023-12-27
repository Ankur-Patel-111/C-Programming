// bubble sort techniq.
#include<stdio.h>
void main()
{
	int a[5]={35,5,10,8,2},ele,i,j,t;
	for(i=0;i<ele-1;i++)
	{
		for(j=0;j<ele-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j]=t;
			}
		}
	}
    
}





