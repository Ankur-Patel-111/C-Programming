//Friend function ex-1
#include<iostream>
using namespace std;
// class declaration
class Family
{
// class datamembers
int cash,gold;
void set_data();
void get_data();
friend int main();
};
// non member function
int main()
{
Family f1;
f1.set_data();
f1.get_data();
}
// Family member fucntion
void Family::set_data()
{
cout  <<"enter the cash and gold:" <<endl;
cin >>cash >>gold;
}
void Family::get_data()
{
cout <<"cash - " <<cash << " | " << "gold - " <<gold <<endl;

}
