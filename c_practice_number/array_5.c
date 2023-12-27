//array element swap. o/p=20,10,40,30,60,50.
#include<stdio.h>
void main()
{
int n;
printf("Enter ele : ");
scanf("%d",&n);
int a[n],i,j,ele,temp;
//scaning the array element.
for(i=0;i<n;i++)
scanf("%d",&a[i]);
//finding the total element size.
ele=sizeof(a)/sizeof(a[0]);
//print the array element.
printf("Before swaping...\n");
for(i=0;i<n;i++)
printf("%d ",a[i]);

//swap logic
if(n%2==0){

for(i=0;i<ele;i=i+2)
{
temp=a[i];
a[i]=a[i+1];
a[i+1]=temp;
}
}
else{
for(i=0;i<ele-1;i=i+2)
{
temp=a[i];
a[i]=a[i+1];
a[i+1]=temp;
}
}

printf("\n After swaping...\n"); 
//after swap element.
for(i=0;i<n;i++)
printf("%d ",a[i]);
}
