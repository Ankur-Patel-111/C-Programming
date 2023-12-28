#include<stdio.h>
void main()
{
	int num,sum=0,temp,r,i,sr,er;
	printf("Enter the sr and er\n");
	scanf("%d%d",&sr,&er);
	for(i=sr;i<=er;i++)
	{
		temp=i;     
		//printf("%d\n",temp); 
		for(temp,sum=0;temp;temp=temp/10)
		{
			r=temp%10;
			sum=sum+(r*r*r);
		}
		if(i==sum)
			printf("armstrong number=%d\n",i);
	}
	printf("\n");
}
