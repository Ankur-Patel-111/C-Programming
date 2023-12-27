// sum of digit 

#include<stdio.h>
void main()
{
int num,num1,s,r,c;
printf("Enter the number\n");
scanf("%d",&num);

for(s=0,c=0;num1=num; num1; num1=num1/10   )
{
r=num1%10;
s=s+r;
c++;
}
printf("num=%d,Sum=%d count=%d\n",num,s,c);


}
