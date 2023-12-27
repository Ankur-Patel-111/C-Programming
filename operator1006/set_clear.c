// bit is set or clear?
//let me take 2 variable num&pos.
#include<stdio.h>
void main()
{
int num,pos;
printf("Enter the Number\n");
scanf("%d",&num);
printf("Enter the Position\n");
scanf("%d",&pos);

//set and clear bit Logic
//num>>pos&1?printf("set bit\n"):printf("clear bit\n");

num&1<<pos?printf("set bit\n"):printf("clear bit\n");




}
