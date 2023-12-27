//my_strlen practice
#include<stdio.h>
int my_strlen(char *);
void main()
{
int i;
char s[20];
printf("Enter the string:\n");
scanf("%[^\n]",s);
i=my_strlen(s);
printf("%d\n",i);
}
int i;
int my_strlen(char *p)
{
while(p[i])
{
i++;
}
return i;
}
