//student class using  name and rollno in c++
#include<iostream>
using namespace std;
/***********class declaration************/
class student
{
/************private member***********/
int rollno;
char name[20];
/************member function*********/
public:
void set_data()
{
cout <<"Enter the rollno and name:" <<endl;
cin >>rollno >>name ;
}
void get_data()
{
cout <<"rollno - " <<rollno <<endl;
cout <<"name - " <<name <<endl;
}
};
int main()
{
class student s1;
s1.set_data();
s1.get_data();

}
