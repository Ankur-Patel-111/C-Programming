// find big element of array by assume index 0 and 1.
#include<stdio.h>
void main()
{
	int i,num,big,small,second_large,second_small;
	printf("Enter the number\n");
	scanf("%d",&num);
	int a[num];

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
	for(i=2;i<num;i++)
	{
		if(a[i]>big)
		{
			second_large=big;
			big=a[i];
		}
		else if( a[i]<small )
		{
			second_small=small;
			small=a[i];
		}
	}
	printf(" s=%d\n b=%d\n sl=%d\n ss=%d\n",small,big,second_large,second_small);	
}

