// string character delete 06-10-23.
#include<stdio.h>
void main()
{
	int i,j;
	char s[20],ch;
	printf("Enter the string\n");
        scanf("%[^\n]",s); // do it scan the space also.
	//scanf("%s",s);

	printf("Enter the character if you want to delete\n");
	scanf(" %c",&ch);
	for(i=0;s[i];i++)
	{
                if(s[i]==ch)
		for(j=i;s[j];j++)
			s[j]=s[j+1];
	}
	printf("%s",s[j]);
        printf("\n");
}
