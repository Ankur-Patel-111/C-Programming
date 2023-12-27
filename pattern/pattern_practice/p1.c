#include<stdio.h>
void main()
{
int x=10,y=20;
 int *const p=&x;
//p=&y;
*p=20;
printf("%d\n",*p);


}
