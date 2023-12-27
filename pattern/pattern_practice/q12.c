#include<stdio.h>
void main()
{
	int i,j,k,num;
	char ch='A',t;
	printf("Enter the number:\n");
	scanf("%d",&num);
	ch=ch+num-1;
	for(i=0,t=ch;i<num;i++)
	{
		for(k=0;k<i-0;k++)
		{
			printf("* ");
		}
		for(j=0;j<num-i;j++)
		{  
			printf("%c ",t);
			t--;
			if(j==0)
		         	ch=t;
			//printf("%c\n",ch);
		}
		t=ch;
		printf("\n");
	}
}
/* //in this code first 6 to 1 and also print with space.
#include<stdio.h>
void main()
{
int i,j,k;
for(i=0;i<5;i++)
{
for(k=0;k<i-0;k++)
{
printf(" ");
}
for(j=0;j<5-i;j++)
{

printf("*");

}
printf("\n");
}
}
 */

/* // only 6 to 1 * print without space.
#include<stdio.h>
void main()
{
int i,j;
for(i=0;i<5;i++)
{
for(j=0;j<5-i;j++)
{
printf("*");
}
printf("\n");
}
}
 */
