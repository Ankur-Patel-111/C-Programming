// WA C program to find big and small element.
#include<stdio.h>
void main()
{
	int a[10],i,big,small,num;
	printf("Enter the number\n");
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		scanf("%d",&a[i]);
	}
	big=a[0];
	for(i=1;i<num;i++)
	{
		if(a[i]>big)
		{
			big=a[i];
		}
	}
	printf("Big element =%d\n",big);
	small=a[0];
	for(i=1;i<num;i++)
	{
		if(a[i]<small)
		{
			small=a[i];
		}
	}
	printf("Small element=%d\n",small);
}

