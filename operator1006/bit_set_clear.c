//particular expression in bit is set or clear.

#include<stdio.h>
void main()
{
int num,pos;
printf("Enter the number\n");
scanf("%d",&num);
printf("Enter the position\n");
scanf("%d",&pos);

printf("before num=%d\n",num);

// num=num|1<<pos;  //expression use to check bit is set or not.

num=num&~(1<<pos); // use to check bit is  clear or not.

num=num^1<<pos;  // to use bit toggle



printf("after num=%d\n",num);





}
