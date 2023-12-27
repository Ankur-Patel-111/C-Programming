//my_strcpy string copy.

#include<stdio.h>
void my_strcpy(char *,char *);
void main()
{
	char s[20],d[20];
	printf("Enter the string\n");
	scanf("%s",s);
	printf("Before string s=%s d=%s\n",s,d);
	my_strcpy(s,d);
	printf("After string s=%s d=%s\n",s,d);
}
void my_strcpy(char *p,char *q)
{
	while(*p)
	{
		*q=*p;
		*p++;
		*q++;
	}
//*q='\0';
/*
int i;
for(i=0;p[i];i++)
q[i]=p[i];
q[i]='\0';
*/
}



