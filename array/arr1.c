// basic array. Array is collection of similer type of data which is in contigious memory.
#include<stdio.h>
void main()
{
	int a[10],i,ele,j,temp;
	ele=sizeof(a)/sizeof(a[0]);
	printf("%ld\n",sizeof(a));
	printf("Enter the elements\n");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);

	for(i=0;i<10;i++)
		printf("%d ",a[i]);
	printf("\n");

	// reverse the element.
	printf("After the revrse elements\n");
	for(i=0,j=1;j<ele-i;i=i+2,j=j+2)

		printf("%d \n",a[i]);
	printf("\n");


}



/*
#include<stdio.h>
void main()
{
int a[5]={10,20,30,40,50},i,ele;
ele=sizeof(a)/sizeof(a[0]);
printf("%ld\n",sizeof(a));
printf("number of elements=%d\n",ele);
}
 */
