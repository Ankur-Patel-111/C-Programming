//strcmp user defined practice_1
#include<stdio.h>
my_strcmp(const char *,const char *);
void main()
{
int i;
char s1[10],s2[10];
printf("enter the s1 and s2 string:\n");
scanf("%s%s",s1,s2);
my_strcmp(s1,s2);
if(i==1)
{
printf("first string is equal:\n");
}
else
printf("second string is equal:\n");
}
my_strcmp(const char *p,const char *q)
{
int i;
for(i=0;i<p[i];i++)
{
if (p[i]!=q[i])
break;
}
if (p[i]==q[i])
return 0;
else
return 1;
}



