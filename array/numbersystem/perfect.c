// perfect number.
#include<stdio.h>
void main()
{
	int num,i,sum=0;
	printf("Enter the number.\n");
	scanf("%d",&num);
	for(i=1;i<num;i++)
	{
		if(num%i==0)
		{
			sum=sum+i;
		}
	}
	if(sum==num)
	{
		printf("Perfect number = %d\n",sum);
	}
	else
		printf("Not Perfect\n");
}
