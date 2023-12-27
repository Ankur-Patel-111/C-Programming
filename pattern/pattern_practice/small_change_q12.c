#include<stdio.h>
void main()
{
	int i,j,k;
        char ch='A',t;
	for(i=0,ch='A';i<5;i++)
	{
		for(k=0;k<i-0;k++)
		{
			printf("*");
		}
		for(j=0,t=ch;j<5-i;j++)
		{

			printf("%c",t);
                        t=t+1;
		}
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
