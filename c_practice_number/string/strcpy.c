#include<stdio.h>
void main()
{
char s[20],d[20];
int i;
printf("Enter the string:\n");
scanf("%s",s);
for(i=0;s[i];i++)
{
d[i]=s[i];
}
d[i]='\0';
printf("s=%s d=%s\n",s,d);

}
