 // fisrt code is wrong
#include<stdio.h>
void main()
{
	int num,fact=1,i,r,temp,sum=0;
	printf("Enter the number\n");
	scanf("%d",&num);
/*
	for(temp=num;num;num=num/10)
	{
		r=num%10;
		for(i=1,fact=1;i<=r;i++)
		{
			fact=fact*i;
		}
		sum=sum+fact;
	}
	if(temp==sum)
		printf("Strong number\n");
	else
		printf("Not Strong number\n");
}

*/

   temp=num;
   while(num)
   {
   r=num%10;

   for(i=1,fact=1;i<=r;i++)
   {
   fact=fact*i;
   }
   sum=sum+fact;
   num=num/10;
   }
   if(sum==temp)
   printf("Strong Number\n");
   else
   printf("Not Strong Number\n");
   }
 


/*
   for(i=1;i<=num;i++)
   {
//r=num%10;
fact=fact*i;
//num=num/10;
}
printf("factorial = %d\n",fact);
}
 */
