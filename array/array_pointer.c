// array through pointer.
#include<stdio.h>
void main()
{
int a[5]={10,20,30,40,50},*p,i;

p=a;
for(i=0;i<5;i++)
//printf("%d ",++*p);
//printf("%d ",*p++);
printf("%d ",p[i]);
printf("\n");





}
