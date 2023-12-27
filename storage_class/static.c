// static word uisng
#include<stdio.h>
void abc(void);
void main()
{
	abc();
	abc();
	abc();
}
void abc (void)
{
	//int i=10;
	static int i=10; // static we can use in this variable reinitialization.
	i++;
	printf("i=%d\n",i);
}
