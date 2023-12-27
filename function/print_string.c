// design a function using print string
#include<stdio.h>
void print_string(char *);
void main()
{
	char s[20];
	printf("Enter the string\n");
	scanf("%[^\n]",s);
	print_string(s);
}
void print_string(char *p) 
{
	while(*p)
		printf("%c ",*p++);
	printf("\n");
}
