// factorial number
#include<stdio.h>
void main()
{
	int num,fact=1,temp,r;
	printf("Enter the number.\n");
	scanf("%d",&num);
	temp=num;
	for(temp;temp;temp=temp/10)
	{
		r=temp%10;
	}
	for(r,fact=1;r;r--)
	{
		fact=fact*r;
	}
	printf("Number of Factorial = %d",fact);
	printf("\n");
}
