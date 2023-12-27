// using function to print string.
#include<stdio.h>
int my_strlen(char *);
void print_string(char *);
void main()
{
	char s[20];
	int l;
	printf("Enter the string:\n");
	scanf("%[^\n]",s);
	l=my_strlen(s);
	printf("String length=%d\n",l);
	print_string(s);

}

int my_strlen(char *p)
{
	int c=0;
	while(*p)
	{
		c++;
		p++;
	}
	return c;

}


void print_string(char *p)
{
	while(*p)
	{
		printf("%c ",*p++);
	}
	printf("\n");
}

/*
   {
   int i;
   for(i=0;p[i];i++)
   {
   printf("%c",p[i]);
   printf("\n");
   }
   }
 */
