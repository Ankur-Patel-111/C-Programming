//armstrong number in function using pointer.
#include<stdio.h>
int armstrong_pointer(int *);
void main()
{
	int num,b;
	printf("Enter the number:\n");
	scanf("%d",&num);

	b=armstrong_pointer(&num);
	if(b==num)
	{
		printf("Number is Armstrong:\n");
	}
	else
		printf("Number is Not Armstrong:\n");

}
int armstrong_pointer(int *p)
{
	int r,sum=0,temp;
	temp=*p;
	for(temp;temp;temp=temp/10)
	{
		r=temp%10;
		sum=sum+(r*r*r);
	}

	if(sum==*p)
		return *p;
	else
		return 0;
}
