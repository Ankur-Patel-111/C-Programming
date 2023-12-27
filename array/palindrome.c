// normal palindrome number.
#include<stdio.h>
void main()
{
	int num,sum=0,r,temp;
	printf("Enter the number\n");
	scanf("%d",&num);
        temp=num;
        for(num;num;num=num/10)
	{
		sum=sum*10+num%10;
	}
	if(temp==sum)
		printf("Palindrome number\n");
	else
		printf("Not Palindrome number\n");

}
