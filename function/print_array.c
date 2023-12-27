// array function
#include<stdio.h>
void print_array(int *,int);
void main()
{
	int a[5]={10,20,30,40,50},ele;
	ele=sizeof(a)/sizeof(a[0]);
	print_array(a,ele);
}
void print_array(int *p,int n)
{
	int i;
	for(i=0;i<n;i++)
		printf("%d ",*p++);
	printf("\n");

}


