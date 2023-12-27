//#friend function using cash and gold.
#include<iostream>
using namespace std;
class FamilyA
{
//data member;
int cash,gold;
public:
void set_data()
cout<<"Enter the cash and gold:" <<endl;
cin>>cash>>gold;
};
class FamilyB
{
int cash,gold;
public:
//member function
void get_data1(FamilyA a)
{
cout<<a.cash <<" " <<a.gold<<endl;
}
void get_data2(FamilyA a)
{
cout<<a.cash <<" " <<a.gold<<endl;
}
void get_data3(FamilyA a)
