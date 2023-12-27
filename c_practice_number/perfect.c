//perfect number is 6,28;

#include<stdio.h>
void main()
{
int i,num,s;
printf("Enter the number\n");
scanf("%d",&num);
for(i=1,s=0;i<num;i++)
{
if(num%i==0)
s=s+i;
}
if(s==num)
printf("Perfect number\n");
else
printf("Not perfect number\n");
}
