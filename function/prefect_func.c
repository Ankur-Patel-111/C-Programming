#include<stdio.h>
void print_perfect(int);
void main()
{
	int num,sr,er;
	printf("Enter the sr and er:\n");
	scanf("%d %d",&sr,&er);
	print_perfect(num);

}
void print_perfect(int n)
{
	int i,sum=0,sr,er;
	for(sr;sr<er;sr++)
	{
for(i=sr;i<sr;sr++)
printf("%d\n",i);
		if(sr%i==0)
		{
			sum=sum+i;
		}
}
		if(sum==i)
			printf("Number is Perfect:\n");
		else
			printf("Number is not perfect:\n");
	}




