// two string concat
#include<stdio.h>
#include<string.h>
struct s1
{
	char s[10];
	char d[20];
};
void main()
{
	struct s1 f ={"hello","world"};
	strcat(f.s,f.d);
	printf("%s\n",f.s);
}














