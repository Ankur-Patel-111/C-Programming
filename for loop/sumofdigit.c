// WAP scan the digit to user input and show the sum of digit.
#include<stdio.h>
void main()
{
int num,num1,sum,r,count=0;
printf("Enter the number\n");
scanf("%d",&num);

for(sum=0, num1=num ; num1;num1=num1/10 )
{
r=num1%10;
//sum=sum+r;
sum=sum*10+r; // reverse the digit.
count++;
}
printf("sum=%d num=%d count=%d\n",sum,num,count);
}




