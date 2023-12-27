i//practice prime number 22-07-2023
#include<iostream>
using namespace std;
class Prime
{
//data member
int num;
public:
//friend function declaration 
friend void set_data(Prime*);
friend void get_data(Prime*);
friend void prime_checking(Prime&);
};
int main()
{
Prime p1;
void set_data(&p1);
void get_data(&p1);
void prime_checking(p1);
}
void set_data()
cout<<"Enter the num:";

