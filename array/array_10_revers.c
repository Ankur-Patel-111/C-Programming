// array in 10 elements reverse
#include<stdio.h>
void main()
{
	int a[10],i,j,ele,temp;
	ele=sizeof(a)/sizeof(a[0]);
	printf("%d\n",ele);
	printf("Enter the element:\n");
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);

	printf("Before print the array:\n");
	for(i=0;i<ele;i++)
		printf("%d ",a[i]);
	printf("\n");

for(i=0,j=ele-1;i<ele/2;i++,j--)
//for(i=0,j=ele-1;i<j;i=i+2,j=j-2)
//	for(i=0,j=ele-1;j>i;i++,j--)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}

	for(i=0;i<ele;i++)
		printf("%d ",a[i]);
	printf("\n");			
}

