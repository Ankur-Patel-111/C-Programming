// number swap logic s=s*10+num%10
#include<stdio.h>
void main()
{
	int a[5]={11,17,55,23,101},ele,t,i,j,s=0,k=0;
	ele=sizeof(a)/sizeof(a[0]);
	printf("%d\n",ele);
	for(i=0,s=0;i<ele;i++,t=0)
	{
		t=a[i];
		for(j=t,s=0;j;j=j/10)
		{
			s=s*10+j%10;
			if(s==t)
			{
			a[k]=s;
			k++;
			}
		}	
}
		for(i=0;i<k;i++)
		printf("%d ",a[i]);
		printf("\n");
/*	for(i=0;i<ele;i++)
		printf("%d ",a[i]);
	printf("\n");*/
}


