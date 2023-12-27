//enter small string to convert uppar string.
#include<stdio.h>
void main()
{
char s[20],i;
printf("Enter the string:\n");
scanf("%[^\n]%s",s);
printf("before string s=%s\n",s);
for(i=0;s[i];i++)
{
if(s[i]>='a' && s[i]<='z')
s[i]=s[i]-32;
}
printf("after string s=%s\n",s);



}
