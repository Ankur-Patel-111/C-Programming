// Note :second largest and second smaller elements
#include<stdio.h>
void main()
{
	int a[10],i,small,large;
	printf("Enter the element\n");
	for(i=0;i<10;i++)
	scanf("%d ",&a[i]);
	for(i=0;i<10;i++)
	{
		if(a[0]>a[1])
		{
			large=a[0];
			small=a[1];
		}
		else
{
			large=a[1];
         		small=a[0];
 }
		for(i=2;i<10;i++)
			if(a[i]>large)
				large=a[i];
		printf("large=%d\n",large);
		for(i=0;i<10;i++)
			if(a[i]<small)
				small=a[i];
		printf("small=%d\n",small);
}
}

