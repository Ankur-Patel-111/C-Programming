// string length finding using pointer.
#include<stdio.h>
void main()
{
char s[20],*p;
int c=0;
p=s;

printf("Enter the string:\n");
scanf("%[^\n]",s);
while(*p)
{
p++;
c++;
}
printf("%d\n",c);
}
