// check a any number is prime or not 12/06/2023 monday

#include<stdio.h>
void main()
{
int num,c,i;
printf("Enter the number\n");
scanf("%d",&num);

for(i=1,c=0;i<=num;i++)
{
if(num%i==0)
c++;
}
if(c==2)
printf("Number is prime\n");
else
printf("Number is not prime\n");

}
