//usnig while loop create multiplication table.
#include<stdio.h>
void main()
{
int i,num;
printf("Enter the number\n");
scanf("%d",&num);
i=1;
while(i<=10)
{
printf("%d *  %d  =  %d\n",num,i,num*i);
i++;
}

}
