//ex-1 constructor cash and gold.
#include<iostream>
using namespace std;
class Family
{
int cash,gold;
public:
Family ()
{
cout<<"constructor"<<endl;
cash=10,gold=20;

}
void get_data()
{
cout<<"cash -:" <<cash <<" "<<"gold -:" <<gold <<endl;
}

};
int main()
{
Family f1,f2,f3,f4;
f1.get_data();
f2.get_data();
f3.get_data();
f4.get_data();

}
