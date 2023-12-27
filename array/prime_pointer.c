#include<stdio.h>
int * prime_pointer(int *);
void main()
{
	int num,*i;
	printf("Enter the number:\n");
	scanf("%d",&num);

	i=prime_pointer(&num);
	if(*i==num)
	{
		printf("Prime number:\n");
	}
	else
		printf("Not Prime number:\n");
}
int * prime_pointer(int *p)
{
	int i;
	for(i=2;i<=*p;i++)
	{
		if(*p%i==0)
		{
			break;
		}
}
		if(*p==i)
		{
			return p;
		}
	//	else
	//		return ;
	
}
//printf("%d\n",*p);
//printf("%p\n",p);

/*
   {

   if(num%i==0)
   {
   break;
   }
   }
   }
 */
