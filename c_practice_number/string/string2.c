//print character by character using loop
#include<stdio.h>
int main()
{
int i;
char s[20];
printf("Enter the string:\n");
scanf("%[^\n]",s);
for(i=0;i<s[i];i++)
printf("%c ",s[i]);
printf("\n");
}
