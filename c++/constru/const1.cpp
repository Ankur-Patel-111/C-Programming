#include<iostream>
using namespace std;
class Family
{
//data members
int cash,gold;
public:
//member function
void get_data()
{
//cout<<"Enter the cash and gold:"<<endl;
cout<<"cash -:" <<cash <<"gold -:" <<gold<<endl;

}
};
int main()
{
Family f1={100,200};
f1.get_data();
}
