// in 5 array element particuler 1 ele is delete.

#include<stdio.h>
void main()
{
	int a[5]={10,20,30,40,50},ele,i,index,t,n,k;
	ele=sizeof(a)/sizeof(a[0]);
	//printf("%ld\n",sizeof(a));
	printf("enter the index you want to delete\n");
	scanf("%d",&n);
	while(n!=0)
	{
		printf("enter the index u want to delete\n");
		scanf("%d",&index);
		k=ele-n;
		int b[k];
		for(i=0,t=0;i<5;i++)
		{
			/*	if(i==index)
				printf("deleted index\n");*/
			if(i!=index)
			{
				b[t]=a[i];
				a[t]=b[i];
				t++;
			}
		}
		n--;
		t=0;
		for(i=0;i<ele-1;i++)
			printf("%d ",b[i]);
		printf("\n");
	}
}
