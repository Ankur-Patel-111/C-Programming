// find big element of array by assume index 0 and 1.
#include<stdio.h>
void main()
{
	int a[10],i,num,big,small;
	printf("Enter the number\n");
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		scanf("%d",&a[i]);
	}
	if(a[0]>a[1])
	{
		big=a[0];
		small=a[1];
	}
	else
	{
		big=a[1];
		small=a[0];
	}
	// big element find purpose
	for(i=2;i<10;i++)
	{
		if(a[i]>big)
			big=a[i];
	}
	printf("big=%d\n",big);

	// small element find purpose
	for(i=2;i<10;i++)
	{
		if(a[i]<small)
			small=a[i];
	}
	printf("small=%d\n",small);
}

