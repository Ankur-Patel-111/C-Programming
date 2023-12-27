// string comparision 2 nd program.
#include<stdio.h>
void main()
{
	char s[30],t[30],i;
	printf("Enter the 1st string and 2nd string\n");
	scanf("%s %s",s,t);
	for(i=0;s[i];i++)
	{
		if(s[i]!=t[i])
				break;
				}
				if(s[i]==t[i])
				printf("string is equal\n");
				else
				printf("string is not equal\n");
				}
