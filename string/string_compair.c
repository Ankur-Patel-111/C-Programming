// string compaire and greter and lessthan. 01/10/2023.
#include<stdio.h>
int my_strcmp(const char *,const char *);
void main()
{
	char f[20],s[20];
	int r;
	printf("Enter the 1st string and 2nd string\n");
	scanf("%s%s",f,s);
	r=my_strcmp(f,s);
	if(r==0)
		printf("Equal...\n");
	else if (r==1)
		printf("1st string is Big...\n");
	else
		printf("2nd string is Big...\n");

}
int my_strcmp(const char *f,const char *s)
{
	while(*f)
	{
		if(*f!=*s)
			break;
		f++;
		s++;
	}
	if(*f==*s)
		return 0;
	else if (*f>*s)
		return 1;
	else
		return -1;
}

/*
   int i;
   for(i=0;f[i];i++)
   {
   if(f[i]!=s[i])
   break;
   }

   if(f[i]==s[i])
   return 0;
   else if (f[i]>s[i])
   return 1;
   else
   return -1;
   }
 */



