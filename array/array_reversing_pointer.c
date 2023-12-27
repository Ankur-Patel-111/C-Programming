#include<stdio.h>
void print_array(int *,int);
void main()
{
	int a[5]={10,20,30,40,50},ele,i;
	ele=sizeof(a)/sizeof(a[0]);
	print_array(a,ele);
	for(i=0;i<ele;i++)
		printf("%d ",a[i]);
	printf("\n");
}
void print_array(int *p,int ele)
{

	int i=0,j,temp,*q;
	q=p;

	/*
	   while(i<ele)
	   {
	   i++;
	   q++;
	   }
	   q--;
	   while(p<q)
	   {
	   temp=*p;
	 *p=*q;
	 *q=temp;
	 p++;
	 q--;
	 }
	 }
	 */

	/*
	   for(i=0;i<ele;i++,q++);
	   q=q-1;

	 */

	i=0,j=ele-1;
while(i<j)
{


	//for(i=0,j=ele-1;i<j;i++,j--)

	temp=p[i];
	p[i]=q[j];
	q[j]=temp;
	i++;
	j--;
}
}

