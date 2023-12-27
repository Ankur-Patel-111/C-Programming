//palindrome number 24/07/2023. number 121 , 545.
#include<stdio.h>
int main()
{
int num,temp,s=0,r;
printf("Enter the number:\n");
scanf("%d",&num);
temp=num;
while(num>0)
{
r=num%10;
s=r+s*10;
num=num/10;
}
if(temp==s)
printf("Palindrome number:\n");
else
printf("Not Palindrome number:\n");
}
