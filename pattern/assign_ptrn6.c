//assignment Q-6 in odd part 1 and even 0 print it.
#include<stdio.h>
void main()
{
	int i,j;
	for(i=0;i<6;i++)
	{
		for(j=0;j<=i;j++)
		{
			if(j%2==0)
			{
				printf("1");
			}
else
printf("0");
		}
		printf("\n");
	}




}
