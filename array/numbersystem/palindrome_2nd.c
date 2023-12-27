// 2 time write palindrome number.
#include<stdio.h>
void main()
{
	int num,temp,sum=0,i;
	//printf("Enter the number\n");
	//scanf("%d",&num);
	for(i=1;i<1000;i++)
	{
		temp=i;
		for(temp,sum=0;temp;temp=temp/10)
		{
			sum=sum*10+temp%10;
		}
	if(sum==i)
		printf("Palindrome number = %d\n",i);
}
}

