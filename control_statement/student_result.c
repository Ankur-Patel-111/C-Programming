// enter the marks print the result pass and fail.useing if else
// in if other condition m<40, m<60 , m<75
#include<stdio.h>
void main()
{
int i,m;
printf("Enter the marks:\n");
scanf("%d",&m);
if (m>=0 && m<=40)
printf("fail...\n");
else if(m>=41 && m<=59)
printf("C grade\n");
else if (m>=60 && m<=80)
printf("B grade\n");
else
printf("A grade\n");


}
