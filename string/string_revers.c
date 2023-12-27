// string scan and reverse
#include<stdio.h>
void main()
{
	char s[20],ch;
	int i,j,l,c=0,t;
	printf("Enter the string\n");
	scanf("%[^\n]",s);
	printf("Before reverse string s = %s\n",s);
	for(l=0;s[l];l++)
	{	
		if(s[l]==' ')
		{
			t=l+1;
			printf("c=%d\n",l);
			for(i=0,j=l-1;j>i;i++,j--)
			{
				ch=s[i];
				s[i]=s[j];
				s[j]=ch;
			}
		

		}
	}
	for(i=t,j=l-1;i<j;i++,j--)
	{
		ch=s[i];
		s[i]=s[j];
		s[j]=ch;
	}
	printf("After reverse string s = %s\n",s);


}

