#include<stdio.h>
void main()
{
	char ch='A';
	int i,j,k=0;
	for(i=0;i<5;i++)
	{
		for(j=0,k=0,ch='A';j<5-i;j++)
		{
			if(j%2==0)
			{
				printf("%c",ch);
				k=k+1;
			}
			else
			{
				printf("%d",k);
				ch=ch+1;
			}
		}
		printf("\n");
	}
}
