#include<stdio.h>
void main()
{
int a[5],ele,i,Large_element;
//finding the total number of elements.
ele=sizeof(a)/sizeof(a[0]);
printf("%d\n",ele);
//scaning the data.
printf("Enter the element:\n");
for(i=0;i<ele;i++)
scanf("%d",&a[i]);
//printing the data.
for(i=0;i<ele;i++)
printf("%d ",a[i]);
printf("\n");

//finding the largest element of an array.
Large_element=a[0];
for(i=1;i<4;i++)
{
if(a[i]>Large_element)
Large_element=a[i];
}
printf("the largest element of array =%d \n",a[i]);







}
