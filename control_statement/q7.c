//write a c program to fine 1 to 500 Armstrong number.
#include<stdio.h>
void main()
{
	int sr,er,sum=0,r,i,temp;
	printf("Enter the sr and er:\n");
	scanf("%d%d",&sr,&er);
	for(i=sr;i<=er;i++)
	{
		temp=i;
		for(temp,sum=0;temp;temp=temp/10)
		{
			r=temp%10;
			sum=sum+(r*r*r);
		}
		if(i==sum)
			printf("Number is Armstrong = %d\n",sum);

	}
}
