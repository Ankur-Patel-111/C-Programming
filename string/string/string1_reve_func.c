#include<stdio.h>
void my_strrev(char *);
void main()
{
	char s[20],*p;
	printf("Enter the string:\n");
	scanf("%s",s);
	printf("Before reverse string s=%s\n",s);
	p=s;
	p++;
//	s+1; // here only increment but not assigning
	my_strrev(s+1);
	printf("After reverse string s=%s\n",s);

}
void my_strrev(char *p)
{
	char ch,*q;
	p=q;
	//	q=p;
	while(*q)
		q++;
	q--;
	while(q>p)
	{
		ch=*q;
		*q=*p;
		*p=ch;
		q++;
		p--;
	}
}

/*
   while(*p)
   p++;
   p--;
   while(q<p)
   {
   ch=*p;
 *p=*q;
 *q=ch;
 p--;
 q++;
 }
 }
 */
