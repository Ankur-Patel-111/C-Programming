    // print a binary num using for loop

#include<stdio.h>
void main()
{
int num,pos;

printf("enter the number\n");
scanf("%d",&num);

for(pos=31;pos>=0;pos--)
printf("%d\n",num>>pos&1);




}
