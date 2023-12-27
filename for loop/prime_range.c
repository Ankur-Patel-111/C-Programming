// wap to findout in range 50 to 100prime numbers
#include<stdio.h>
void main()
{
	int i,num,c=0;
	for(num=50;num<=100;num++)
	{
		for(i=2;i<num;i++)
		{
			if(num%i==0)
				break;
		}
		if(num==i){
			c=c+1;
			printf("c=%d\n",c);
			printf("num=%d\n",num);
		}
	}
}
