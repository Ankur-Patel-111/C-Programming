// array allocation in c++.
#include<iostream>
using namespace std;
int main()
{
int *p;
p=new int[5];
cout <<"Enter the element:" <<endl;
for(int i=0;i<5;i++)
cin >>p[i];

for(int i=0;i<5;i++)
cout <<p[i] <<endl;
delete []p;


}
