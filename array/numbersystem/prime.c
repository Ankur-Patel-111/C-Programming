#include<stdio.h>
void main()
{
	int num,i;
	printf("Enter the number\n");
	scanf("%d",&num);
	for(i=2;i<=num;i++)
	{
		if(num%i==0)
			break;
	}
	if(num==i)
		printf("Prime Number\n");
	else
		printf("Not Prime Number\n");
}


