//WAP check two string is equal or not.
#include<stdio.h>
void main()
{
	char s[20],t[20],i;
	printf("Enter the 1st and 2nd string\n");
	scanf("%s %s",s,t);
	for(i=0;s[i];i++)
	{
		if(s[i]!=t[i])
			break;
	}
	if(s[i]==t[i])
		printf("String is equal.\n");
	else
		printf("String Not equal.\n");

}
