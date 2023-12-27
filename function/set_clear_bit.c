// check given number is set or clear using function.
#include<stdio.h>
int set_bit(int);
void main()
{
	int num,a;
	printf("Enter the number:\n");
	scanf("%d",&num);
	a=set_bit(num);
	printf("count =%d",a);
	printf("\n");
}
int set_bit(int num)
{
	int pos,c=0;
	for(pos=0,c=0;pos<=31;pos++)
	{
		if((num>>pos&1)==0) 

			c++;
	}
	return c;
}
