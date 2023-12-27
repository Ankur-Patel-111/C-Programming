#include<stdio.h>
int my_strcmp(const char *,const char *);
void main()
{
	int i;
	char s1[20],s2[20];
	printf("Enter the string s1 and s2\n");
	scanf("%s%s",s1,s2);
	i=my_strcmp(s1,s2);
	if(i==1)
{
	printf("String is equal:\n");
}
	else
		printf("String is not equal:\n");
}
int my_strcmp(const char *p,const char *q)
{
	int i;
	for(i=0;p[i];i++)
	{

	//	for(j=0;q[j];j++)
//		{	
			if(p[i]!=q[i])
				break;
//		}
	}
	if(p[i]==q[i])
		return 1;
	else
		return 0;
}
