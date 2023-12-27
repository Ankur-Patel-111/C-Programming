// in array 10 element reversing 
#include<stdio.h>
void main()
{
	int a[10],i,j,ele,temp;
	ele=sizeof(a)/sizeof(a[0]);
	printf("%ld\n",sizeof(a));
	printf("Enter the ele\n");
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);

	printf("Before reverse ..\n");
	for(i=0;i<ele;i++)
		printf("%d ",a[i]);
	printf("\n");

	for(i=2,j=9;i<ele-1-i;i++,j--)
	{
	//	if(a[i]2==0)
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
	printf("After reverse ..\n");
	for(i=0;i<ele;i++)
		printf("%d ",a[i]);
	printf("\n");
}


/*
//-----------------------------------reverse logic---------------------
for(i=0,j=1;j<ele;i=i+2,j=j+2)
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
printf("After reverse ..\n");
for(i=0;i<ele;i++)
printf("%d ",a[i]);
printf("\n");
}
 */


/*
   for(i=0;i<ele;i++)
   {
   if(i==pos)
   {
   for(j=i;i<ele;i++)
   a[j]=a[j+1]	
   }
   }
 */
