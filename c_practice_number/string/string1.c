//basic string based program
#include<stdio.h>
int main()
{
char s[50];
printf("Enter the string\n");
gets(s);
//scaning the space we can use this format specifier.
//scanf("%[^\n]",s);
//printf("s=%s\n",s);
puts(s);
}
