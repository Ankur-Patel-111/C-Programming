//class student
#include<iostream>
using namespace std;

//class declaration.
class Student
{
//private datamembers. 
public:
int rollno;
protected:
char name[20];
private:int age;
//member function.
public:
void set_data()
{
cout <<"enter the name and rollno" <<endl;
cin >>name >>rollno;
}
void get_data()
{
cout <<"Rollno - " <<rollno <<endl;
cout <<"Name - " <<name <<endl;
}
};
void test()
{
class Student s2;
s2.set_data();
s2.get_data();
}

int main()
{
class Student s1;
test();
s1.set_data();
s1.get_data();
}



