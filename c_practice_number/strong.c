// strong number  145 = 
#include<stdio.h>
void main()
{
	unsigned int num,i,t=0,s=1,j;
	printf("Enter the number\n");
	scanf("%d",&num);
	/*for(i=1,s=1;i<=num;i++)
	  {
	  s=s*i;
	  }*/
	for(i=num,s=0;i;i/=10)
	{
		j=i%10;
		t=1;
	while(j)
	{
	t=t*j;
	j--;
	}
	s=s+t;
}
		if(t==num)
		printf("yes\n");

		else
		printf("not\n");
}

