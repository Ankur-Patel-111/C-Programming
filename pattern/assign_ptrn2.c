// assignment pattern 2 19-09-2023 tuesday. & Generic Pattern.
#include<stdio.h>
void main()
{
	int i,j,k,l,m,n,a;
printf("Enter the number:\n");
scanf("%d",&a);
	for(i=0;i<a;i++)
	{
		for(j=0;j<a-i;j++)
		{
			printf(" ");
		}
		for(k=0;k<2*i+1;k++)
		{
			printf("*");
		}
		printf("\n");
	}


	// second perform task;
	for(l=0;l<a;l++)
	{
		for(m=0;m<l+2;m++)
		{
			printf(" ");
		}
		for(n=0;n<11-2*l;n++)
		{
			printf("*");
		}
		printf("\n");
	}
}

