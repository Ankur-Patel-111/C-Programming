//my_strlen function.
#include<stdio.h>
int my_strlen(char *);
void main()
{
char s[20];
int i;
printf("Enter the string\n");
scanf("%s",s);
i=my_strlen(s);
printf("%d\n",i);
}
int my_strlen(char *p)
{
int i=0,c=0;
while(p[i])
{
i++;

}
//for(i=0;p[i];i++);
return i;
}
