// sum of digit.
#include<stdio.h>
void main()
{
	int num,sum=0;
	printf("Enter the number\n");
	scanf("%d",&num);

	for(num;num;num=num/10)
	{
		//r=num%10;
		sum=sum+num%10;
	}
	printf(" sum = %d\n",sum);
}
