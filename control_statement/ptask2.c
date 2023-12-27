//AIM : we need to scan a char to user input check char is a capital letter or small letter.
#include<stdio.h>
void main()
{
char ch;
printf("Enter the character:\n");
scanf("%c",&ch);
if(ch>='A' && ch<='Z')
printf("capital letter..\n");
else if(ch>='a' && ch<='z')
printf("small letter..\n");
else if(ch>='0' && ch<='9')
printf("digit ..\n");
else
printf("special character\n");



}
















/*
//WAP to scan a small character enter to print ASCII value.
#include<stdio.h>
void main()
{
char ch;
printf("Enter the character:\n");
scanf("%c",&ch);
if(ch>='A' && ch<='Z')
//if(ch>=97 && ch<=122)
{
printf("ch=%c, ASCII is=%d\n",ch,ch);
}
}
*/
