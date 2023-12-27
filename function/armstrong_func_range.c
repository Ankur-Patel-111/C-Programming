// find Armstrong number in range using function.
#include<stdio.h>
void armstrong_range(int sr,int er);
void main()
{
	int sr,er;
	printf("Enter the sr and er\n");
	scanf("%d %d",&sr,&er);
	armstrong_range(sr,er);
}
void armstrong_range(int sr,int er)
{
	int sum=0,temp,r,i;
	for(sr;sr<=er;sr++)
	{
		temp=sr;
		//	printf("%d\n",temp);	
		for(temp,sum=0;temp;temp=temp/10)
		{
			r=temp%10;
			sum=sum+(r*r*r);		
		}
		if(sum==sr)
		{
			printf("Armstrong number = %d:\n",sum);
		}
	}
}
