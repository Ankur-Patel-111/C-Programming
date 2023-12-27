// strupr small char to capital char.
#include<stdio.h>
void my_strupr(char *);
void main()
{
char s[20];
printf("Enter the string:\n");
scanf("%[^\n]",s);

printf("Before enter the string: %s\n",s);
 my_strupr(s);
printf("After enter the string: %s\n",s);
}
void my_strupr(char *p)
{
// capital string to small string.
/*
while(*p)
{
if(*p>='A' && *p<='Z')
*p=*p+32;
*p++;
}*/

// small string to capital string.
while(*p)
{
//if(*p>='a' && *p<='z')
*p=*p-32;
p++;
}
}
