// fibonaci serices 0 1 1 2 3 5 8 13 21 34
#include<stdio.h>
void main()
{
	int a=0,b=1,num,c,i;
	printf("Enter the number\n");
	scanf("%d",&num);
	for(i=2;i<num;i++)
	{
		c=a+b;
		printf("%d\n",c);
		a=b;
		c=b;
	}
}
