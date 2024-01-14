// Fibonaci Series
//Using While loop in Function -----------------------------

#include<stdio.h>
void print_fibonaci(int num);
void main()
{
	int num;
	printf("enter the number.\n");
	scanf("%d",&num);
	print_fibonaci(num);

}
void print_fibonaci(int num)
{
	int a=0,b=1,i,c;
	printf("%d ",a);
	printf("%d ",b);
	i=2;
	while(i++<num)
	{
		c=a+b;
		a=b;
		b=c;
		printf("%d ",c);
	}
	printf("\n");


}


/*
// Using for loop in Function
#include<stdio.h>
void print_fibonaci(int num);
void main()
{
int num;
printf("Enter the number.\n");
scanf("%d",&num);
print_fibonaci(num);
}
void print_fibonaci(int num)
{
int a=0,b=1,i,c;
printf("%d ",a);
printf("%d ",b);
for(i=2;i<num;i++)
{
c=a+b;
a=b;
b=c;
printf("%d ",c);
}
printf("\n");
}
 */
//--------------------------------------------------------------
/*
#include<stdio.h>
void main()
{
int a=0,b=1,i,num,c;
printf("Enter the number.\n");
scanf("%d",&num);
printf("Fibonacci series...\n %d %d ",a,b);
for(i=2;i<num;i++)
{
c=a+b;
a=b;
b=c;
printf("%d ",c);
}
printf("\n");
}
 */
