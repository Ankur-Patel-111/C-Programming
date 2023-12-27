// array to pointer 10 elements allocate memory
#include<stdio.h>
void main()
{
int a[10]={10,20,30,40,50,60,70,80,90,100},*p,i;
p=a;
for(i=0;i<10;i++)
printf("%d ",*p++);
printf("\n");



}
