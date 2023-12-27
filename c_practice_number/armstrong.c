//25-07-2023 //armstrong number is 153 = 1*1*1 + 5*5*5 + 3*3*3 =1+125+27 =153
#include<stdio.h>
int main()
{
int num,arm=0,r,temp;
printf("Enter the number\n");
scanf("%d",&num);
temp=num;
while(num>0)
{
r=num%10;
arm=(r*r*r)+arm;
num=num/10;
}
if(temp==arm)
printf("number is armstrong\n");
else
printf("number is not armstrong\n");
}
