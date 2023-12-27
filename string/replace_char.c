// WAP in a string how many cahracter is repeat
#include<stdio.h>
void main()
{
char s[20],ch,ch1;
int i,c=0;
printf("Enter the string.\n");
scanf("%[^\n]",s);
printf("Enter the character.\n");
scanf(" %c",&ch);
printf("Enter the char 1.\n");
scanf(" %c",&ch1);


for(i=0,c=0;i<s[i];i++)
{
if(s[i]==ch)
c++;
}
printf("count c=%d\n",c);


}
