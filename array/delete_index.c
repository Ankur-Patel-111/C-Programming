// in array delete one index.

#include<stdio.h>
void main()
{
	int a[10],index,ele,i,j,k;
	printf("Enter the total element :\n");
	scanf("%d",&ele);
	printf("Enter the element\n");
	for(i=0;i<ele;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("which position you want to delete:\n");
	scanf("%d",&index);

	for(j=0;j<ele;j++)
	{               //[1,5,3,6,2]
		if(j==index)
		{
			for(i=j;i<ele;i++)
				a[i]=a[i+1];
		}
	}
	for(j=0;j<ele-1;j++)
		printf("%d\n",a[j]);
}

