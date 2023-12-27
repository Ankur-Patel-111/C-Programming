// write a function to print 10 integer element.

#include<stdio.h>
void print_array(int *,int);
void main()
{
	int a[10]={10,20,30,40,50,60,70,80,90,100},ele;
	ele=sizeof(a)/sizeof(a[0]);
	printf("%d\n",ele);
	print_array(a,ele);
}
void print_array(int *p,int ele)
{
	int i;
	for(i=0;i<ele;i++)
	{
		printf("%d",*p++);
                printf("\n");
	}

}

