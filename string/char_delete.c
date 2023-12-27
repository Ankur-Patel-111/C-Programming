// wap in string delete a word.
#include<stdio.h>
#include<string.h>
void main()
{
	char s[20],ch;
	int i,j,c=0,n;
	printf("Enter the string:\n");
	scanf("%[^\n]",s);
	printf("Enter the number of character you want to delet\n");
	scanf("%d",&n);
	//     strlen(s)
	while(1)
	{
		c++;
		printf("Enter the character:\n");
		scanf(" %c",&ch);

		printf("Before s=%s\n",s);
		//-------------------Logic-------------------
		for(i=0;s[i];i++)
		{
			if(s[i]==ch)
			{
				for(j=i;s[j];j++)
					s[j]=s[j+1];
				i--;
			}
			//if(s[i]!=ch)
			//break;
		}
		printf("After s=%s\n",s);	
		if(c==n)
			return;
		if(strlen(s)==0)
			break;
	}
}
