// array using print the data

#include<iostream>
using namespace std;
int main()
{
int *p;
p=new int[5]{10,20,30,40,50};
//cout <<"Enter the elements:" <<endl;
//for(int i=0;i<10;i++)
//cin >>p[i];

for(int i=0;i<10;i++)
cout <<p[i] <<endl;
delete []p;
}
