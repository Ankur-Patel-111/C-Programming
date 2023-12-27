// in string delete any word.
#include<stdio.h>
void my_strdel(char *,char);
void main()
{
	char s[20],ch;
	printf("Enter the string\n");
	scanf("%s",s);
	printf("Enter the character if you want to delete\n");
	scanf(" %c",&ch);
	printf("Before delte the string = %s\n",s);
	my_strdel(s,ch);
	printf("After delet the string =%s\n",s);
}
void my_strdel(char *s,char ch)
{
int i,j;
for(i=0;s[i];i++)
	{
			if(ch==s[i])
			{
			   for(j=i;s[j];j++)  
                           s[j]=s[j+1];
		           i--;		
			}
	}

}
