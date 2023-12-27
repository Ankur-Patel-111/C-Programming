#include<iostream>
using namespace std;
class A
{
int x,y;
friend void set_data();
friend void get_data();
};
void set_data(A &obj1)
{
cout<<"Enter the x and y value" <<endl;
cin >>obj1.x >>obj1.y;
}
void get_data(A &obj1)
{
cout<<obj1.x<<obj1.y<<endl;
}
int main()
{
A obj1;
set_data(obj1);
get_data(obj1);
}

