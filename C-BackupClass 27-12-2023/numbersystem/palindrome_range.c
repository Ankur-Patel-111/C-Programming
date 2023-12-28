// palindrome number in range.
#include<stdio.h>
void main()
{
	int s=0,temp,i,c=0;
	for(i=1;i<=500;i++)
	{
		temp=i;
		for(temp,s=0;temp;temp=temp/10)
		{
			s=s*10+temp%10;
		}
		if(s==i) 
		{
			c++;
			printf("Palindrome number = %d\n",s);
			printf("%d\n",c);
		}
	}
}
