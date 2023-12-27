#include<stdio.h>
int main()
{
	int s,ss,i,j,a[5],k;
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	s=a[0];
	ss=a[1];
	if(a[1]<a[0])
	{
		s=a[1],ss=a[0];
	}
	for(i=2;i<5;i++)
	{
		if(a[i]<s)
		{
			ss=s,s=a[i];
		}
		else if(a[i]<ss && a[i]>s ||s==ss )
		{
			ss=a[i];
		}

	}
	printf("s=%d ss=%d\n",s,ss);
}
