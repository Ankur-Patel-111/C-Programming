// my_strcpy to copy string  to destination string and delete string in a particular.
#include<stdio.h>
#include<string.h>
void my_strcpy(char *,char *);
void main()
{
	int i;
	char s[20],d[20],ch;
	printf("Enter the string\n");
	scanf("%s",s);
	printf("Before copy the string = %s\n",s);
	my_strcpy(s,d);
	printf("After copy the string  = %s\n",d);
	for(i=0;d[i]!='\0' ;i++)
		printf("%c",d[i]);
	printf("\ni=%d\n",i);

}
void my_strcpy(char *s,char *d)
{
	int i;
	while(*s)
	{

		*d=*s;
		s++;
		d++;
	}

}

/*
   {
   int i;
   for(i=0;s[i];i++)
   {
   d[i]=s[i];
   }
   d[i]='\0';
   }
 */
