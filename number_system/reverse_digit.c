// reverse the digit.
#include<stdio.h>
void main()
{
	int num,r,s=0;
	printf("Enter the number\n");
	scanf("%d",&num);
	for(num;num;num=num/10)
	{
		r=num%10;
                s=s*10+r;
	}
printf("%d\n",s);
}
