//nested for loop in c.
#include<stdio.h>
void main()
{
int i,j;
for(i=0;i<5;i++)
{
for(j=0;j<3;j++)
printf("i=%d j=%d\n",i,j);
printf("--------------------\n");
}
printf("bye1 i=%d\n",i);
printf("bye2 j=%d\n",j);
}
