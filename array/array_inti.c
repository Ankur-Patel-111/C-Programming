// array initaliazation
/* 1)when we are initaliazation array providing number of element is optional.
   2)
*/
#include<stdio.h>
void main()
{
//int a[];
//int a[]={10,20,30,40,50}; 
//int a[5]={10,20,30,40,50,60,70}; // access initaliazation.
//int a[5]={10,20,30},i; //partial initaliazation in remaining byte is consider 0(zero)/
//for(i=0;i<5;i++)
//printf("%d \n",a[i]);
//printf("%ld\n",sizeof(a));

char a[10]={'a','b','c','d'};
char s[10]="abcd";

printf("%ld %ld\n",sizeof(a),sizeof(s));



}
