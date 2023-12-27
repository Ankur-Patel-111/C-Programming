#include<stdio.h>
int palindrome_num(int);
void main()
{
	int num,a;
	printf("Enter the number:\n");
	scanf("%d",&num);
	a=palindrome_num(num);

	if(num==a)
	{
		printf("%d is Number is Palindrome\n",a);
	}
	else
		printf("%d is Number is Not Palindrome\n",a);

}
int palindrome_num(int n)
{
      static int i,sum=0,r,temp;
	temp=n;
	for(temp;temp;temp=temp/10)
	{
		r=temp%10;
		sum=sum*10+r;
	}
	//printf("%d\n",n);
	//printf("%d\n",temp);
return sum;

}
