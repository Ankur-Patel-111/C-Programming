#include<stdio.h>
void main()
{
int num,i;
printf("Enter the number\n");
scanf("%d",&num);
for(i=0;i<num;i++)
{
if(num%i==0)
printf("%d",i);
}


}
