#include<stdio.h>
void main()
{
	int i,j,k=1,num,t;   
    
	printf("Enter the number:\n");
	scanf("%d",&num);
        t=num-1;
	for(i=0,k=1;i<num;i++)
	{
		for(j=0,k=1;j<num;j++)
		{
			if(j==t)
			{
				printf("*");
			}
			else
			{
				printf("%d",k);
			}
				k=k+1;
		}
		printf("\n");
		t--;
	}
}
/*		
#include<stdio.h>
void main()
{
int i,j,k=1,t=4;
for(i=0,k=1;i<5;i++)
{
for(j=0,k=1;j<5;j++)
{
if(j==t)
{
printf("*");
}
else
{
printf("%d",k);
k=k+1;
}
}
printf("\n");
t--;
}
}
 */


