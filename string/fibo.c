#include<stdio.h>
void main()
{
	int i,num,a=0,b=1,c;
	printf("Enter the number:\n");
	scanf("%d",&num);
printf("%d\n",a);
printf("%d\n",b);
	for(a=0,b=1,i=0;i<=num;i++)
	{
		c=a+b;
		a=b;
		b=c;
	printf("%d\n",c);
	}


}
