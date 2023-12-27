#include<stdio.h>
void main()
{
int num,i,count=0;
printf("Enter the number\n");
scanf("%d",&num);
for(i=1;i<=num;i++)
{
if(num%i==0)
{
count++;
}
}
if(count==num)
printf("Number is prime\n");
else
printf("Number is not prime\n");
}
