// WAP to scan 10 integer and find the largest element.
#include<stdio.h>
void main()
{
int a[10],ele,i,large_ele;

ele=sizeof(a)/sizeof(a[0]);
printf("%ld\n",sizeof(a));

printf("Enter the element\n");
for(i=0;i<10;i++)
scanf("%d",&a[i]);
for(i=0;i<10;i++)
printf("%d ",a[i]);
printf("\n");
//----------------------Logic----------------
large_ele=a[0];
for(i=1;i<10;i++)
{
if(a[i]>large_ele)
large_ele=a[i];
}
printf("in given array largest element is = %d\n",large_ele);
}


