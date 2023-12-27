// Palindrome num=121.
#include<stdio.h>
void main()
{
	int num,sum=0,temp;
	printf("Enter the number:\n");
	scanf("%d",&num);
	temp=num;
	for(num;num;num=num/10)
	{
		sum=sum*10+num%10;
	}
	if(temp==sum)
		printf("Number is Palindrome number:\n");
	else
		printf("Number not Palindrome number:\n");
}
