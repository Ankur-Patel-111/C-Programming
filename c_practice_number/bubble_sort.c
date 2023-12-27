#include<stdio.h>
void main()
{
	int a[5],i,j,t,ele;
	ele=sizeof(a)/sizeof(a[0]);
	printf("%d\n",ele);
	printf("Enter the element\n");
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);

	printf("Before sort\n");
	for(i=0;i<ele;i++)
		printf("%d \n",a[i]);
	printf("\n");
	// bubble sort logic
	for(i=0;i<ele-1;i++)
	{
		for(j=0;j<ele-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}

		}
	}
	printf("After sort\n");
	for(i=0;i<ele;i++)
		printf("%d \n",a[i]);
	printf("\n");
}
