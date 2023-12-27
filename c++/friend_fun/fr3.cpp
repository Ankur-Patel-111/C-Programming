// friend function in this error.
#include<iostream>
using namespace std;
class A
{
int x,y;
public:
void set_data()
{
cout<<"Enter the x and y values:"<<endl;
cin>>x>>y;
friend class B
}
};
class B
{
public:
void get_data(A);
};
void B::get_data(A obj1)
{
cout<<obj1.x<<" " <<obj1.y<<endl;
}
int main()
{
A obj1;
B obj2;
obj1.set_data();
obj2.get_data();
} 
