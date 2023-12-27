//practice friend class
#include<iostream>
using namespace std;
class Son;
class Father
{
char name[20];
float salary;
public:
void set_data()
{
cout<<"Enter the name and salary:"<<endl;
cin>>name>>salary;
}
void get_data()
{
cout<<"father name :"<<" " <<name <<endl;
cout<<"father salary :"<<" "<<salary <<endl;
}
void friend income_tax(Father f1, Son s1);
};

class Son
{
char name[20];
float salary;
public:
void set_data()
{
cout<<"Enter the son name and salary:"<<endl;
cin>>name >>salary;
}
void get_data()
{
cout<<"son name:" <<" " <<name <<endl;
cout<<"son salary:" <<" "<<salary <<endl;
}
void friend income_tax(Father f1,Son s1);
};
void income_tax(Father f1, Son s1)
{
float total;
total=f1.salary+s1.salary;
if(total<=8000)
cout<<"no need to pay tax:" <<endl;
else
cout<<"18% _ for pay tax:" <<endl; 

}

int main()
{
Father f1;
Son s1;
f1.set_data();
f1.get_data();
s1.set_data();
s1.get_data();
income_tax(f1,s1);
}
