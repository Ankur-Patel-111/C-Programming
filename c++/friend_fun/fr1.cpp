//
#include<iostream>
using namespace std;
class A
{
//data members
int x=100,y=200;
friend int main();
};
int main()
{
A a1;
cout<<a1.x<<" "<<a1.y<<endl;
}
