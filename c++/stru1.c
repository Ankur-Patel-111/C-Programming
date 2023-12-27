// using c lang in sizeof =0.
#include<stdio.h>
struct st
{
int a;
char* b;
};

int main()
{
struct st s;
printf("%ld\n",sizeof(s));
printf("%ld\n",sizeof(s));
}
