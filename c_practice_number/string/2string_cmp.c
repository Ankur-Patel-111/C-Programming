// 2 string compair
#include<stdio.h>
void main()
{
char s[10],s1[20];
int i;
printf("Enter the string\n");
scanf("%s%s",s,s1);
for(i=0;s[i];i++)
{
if(s[i]!=s1[i])
break;
}
if(s[i]==s1[i])
printf("equal..\n");
else
printf("not equal..\n");
}
