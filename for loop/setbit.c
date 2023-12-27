// check number is setbit 
#include<stdio.h>
void main()
{
int num,pos,c;
printf("Enter the number\n");
scanf("%d",&num);
for(pos=0,c=0;pos<=31;pos++)
if(num>>pos&1)
c++;
printf("c=%d\n",c);

}
