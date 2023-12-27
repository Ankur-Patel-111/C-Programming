// write a c program to convert lower to upper and upper to lower case
#include<stdio.h>
void main()
{
char ch;
printf("Enter the Character:\n");
scanf("%c",&ch);

if(ch>='a' && ch<='z')
{
ch=ch^32;
printf("Lower to upper case = %c\n",ch);
}
else if(ch>='A' && ch<='Z')
{
ch=ch^32;
printf("Upper to lower case = %c\n",ch);
}


}
