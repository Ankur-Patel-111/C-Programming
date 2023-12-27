// Generic pattern.
#include<stdio.h>
void main()
{
	int i,j,k,num;
	char ch='A',l='A';
	printf("Enter the number:\n");
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		for(j=0;j<(num+7)-2*i;j++)
		{
			printf(" ");
		}
		for(k=0;k<=2*i;k++)
		{
			printf(" %c",l);
			l--;
		}
		printf("\n");
		l=ch+1;
		//printf("%c\n",l);
		ch=l+1;
		//printf("%c\n",ch);
		l++;
		//printf("%c\n",ch);
	}

}

/*
#include<stdio.h>
void main()
{
int i,j,k;
char ch='A',l='A';
for(i=0;i<5;i++)
{
for(j=0;j<8-2*i;j++)
{
printf(" ");
}
for(k=0;k<=2*i;k++)
{
printf(" %c",l);
l--;
}
printf("\n");
l=ch+1;
//printf("%c\n",l);
ch=l+1;
//printf("%c\n",ch);
l++;
//printf("%c\n",ch);
}

}
 */
