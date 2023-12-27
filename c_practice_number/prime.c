//prime number is = 2,3,5,7,11
#include<stdio.h>
int main()
{
int num,i,count=0;
printf("Enter the number:\n");
scanf("%d",&num);
for(i=1;i<=num;i++)
{
if(num%i==0)
{
count++;
}
}
if(count==2)
printf("Number is prime:\n");
else
printf("Number is not prime:\n");
}

