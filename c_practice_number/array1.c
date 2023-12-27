#include<stdio.h>
void main()
{
int a[5]={10,20,30,40,50},i=500;
printf("%d %d\n",i,a[-1]);
a[-1]=100;
printf("%d %d\n",i,a[-1]);

//int a[10],i;
//for(i=0;i<10;i++)
//printf("&a[i],&i=%u= %u\n",i,&a[i]);
}
