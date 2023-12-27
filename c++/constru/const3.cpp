//ex-2 class A using constructor 
#include<iostream>
using namespace std;
class A
{
//data member.
int x,y;
public:
A () 
{
cout<<"constructor"<<endl;
//x=100,y=200;
}

void get_data()
{
cout<<x <<" " <<y <<endl;
}



};

int main()
{
A a1,a2,a3,a4;
a1.get_data();
a2.get_data();
a3.get_data();
a4.get_data();
}
