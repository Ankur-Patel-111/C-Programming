#include<stdio.h>
void main()
{
	int n;
	printf("enter the n\n");
	scanf("%d",&n);
	int i,j,ele,a[n],t;
	ele=sizeof(a)/sizeof(a[0]);
	printf("ele=%d\n",ele);
	printf("enter the ele\n");
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);
	for(i=0,j=1;i<ele;i=i+2,j=j+2)
	{
		t=a[i];
		a[i]=a[j];
		a[j]=t;
	}
	for(i=0;i<ele;i++)
		printf("%d ",a[i]);
	printf("\n");
}
