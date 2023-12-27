// switchcase

#include<stdio.h>
void main()
{
int i,num;
printf("Enter the number\n");
scanf("%d",&num);
switch(num)
{
case 1:printf("number is 1:\n");
       break;
case 2:printf("number is 2:\n");
       break;
case 3:printf("number is 3:\n");
       break;
default:printf("Unknown option\n");
//default:printf("Not 1,2,3\n");

}

}
