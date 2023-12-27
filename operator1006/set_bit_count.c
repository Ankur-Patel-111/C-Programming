//WAP to count  how many bit is set are clear.
//ex bit 15. count = 4.

#include<stdio.h>
void main()
{
int num,pos,c;
printf("Enter hte number\n");
scanf("%d",&num);
for(pos=0,c=0;pos<=31;pos++)
if(num>>pos&1)
c++;
printf("set bit c=%d\n",c);





}
