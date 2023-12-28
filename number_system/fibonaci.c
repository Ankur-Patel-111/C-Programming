// fibonaci serices
#include<stdio.h>
void main()
{
	int a=0,b=1,c,num,i;
	printf("Total Enter the number.\n");
	scanf("%d",&num);
	printf("%d\n",a);
	printf("%d\n",b);
	for(i=0;i<=num;i++)
	{
		c=a+b;
		a=b;
		b=c;
		if(num>c && c>0)
			printf("%d \n",c);
	}
}
