// cpp in DMA program-1
#include<iostream>
using namespace std;
int main()
{
int *p;
//p=(int*)malloc(sizeof(int));
p=new int;
cout<<"Enter the data:" <<endl;
cin>>*p;
cout <<"*p -" <<*p  <<endl;
//free(p);
delete p;


}
