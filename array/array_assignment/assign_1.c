// WAP to input  10 numbers through the keyboard into an array and display the result of addition of even number and product of odd numbers.

#include<stdio.h>
void main()
{
	int a[10],i,s=0,mul=1;
	printf("Enter the element\n");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	for(i=0;i<10;i++)
	{
		if(a[i]%2==0)
		{
			s=s+a[i];
		}
		else
			mul=mul*a[i];
	}
	printf("sum s=%d , mul =%d\n",s,mul);
}
