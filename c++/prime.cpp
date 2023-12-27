#include<iostream>
using namespace std;
class Prime 
{
    int num;
    public:
    friend void set_data(Prime*);
    friend void get_data(Prime*);
    friend void prime_checking(Prime&);
};
int main() 
{
    Prime p1;
    set_data(&p1);
    get_data(&p1);
    prime_checking(p1);
}

void set_data(Prime *obj1)
{
    cout << "Enter Num : ";
    cin >> obj1->num;
}

void get_data(Prime *obj)
{
    cout << "Num is : " << obj->num << endl;
}

void prime_checking(Prime &r)
{
    int i;
    for(i=2;i<r.num;i++)
    {
        if(r.num%i==0)
        break;
    }
    if(r.num==i)
    cout << "Num is Prime\n";
    else
    cout << "Num Not prime\n";
}
