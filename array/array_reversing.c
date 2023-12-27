// array element reversing.
#include<stdio.h>
void main()
{
int a[5]={10,20,30,40,50},ele,i,j,temp;
ele=sizeof(a)/sizeof(a[0]);
//printf("%ld\n",sizeof(a));
//for(i=0;i<5;i++)
//printf("%d \n",a[i]);
for(i=0,j=ele-1;i<j;i++,j--)
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
for(i=0;i<ele;i++)
{
printf("%d ",a[i]);
}
printf("\n");
}
