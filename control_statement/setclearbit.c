//WAP take user input to check number is set/clear/toggle.
#include<stdio.h>
void main()
{
int num,pos,op,c=0;
printf("Enter the number:\n");
scanf("%d",&num);
L1:
printf("Enter the bit postion\n");
scanf("%d",&pos); 
if(pos>=0 && pos<=31)
{
printf("Enter the op 1)set 2)clear 3)toggle\n");
scanf("%d",&op);
if(op==1)
{
num=num|1<<pos;
printf("num=%d\n",num);
}
else if(op==2)
{
num=num&~(1<<pos);
printf("num=%d\n",num);
}
else if(op==3)
{
num=num^1<<pos;
printf("num=%d\n",num);
}
else
printf("unkown option\n");
}
else
c++;
printf("wrong bit postion\n");
if(c<2)
goto L1;
}





