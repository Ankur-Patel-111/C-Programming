// using c++ call by address.
#include<iostream>
using namespace std;
void swap_data (int *p , int *q)
{
cout <<"call by address" <<endl;
int t;
t=*p;
*p=*q;
*q=t;
}
 main()
{
int i=10,j=20;
cout << "Before swap value i:" <<i <<" "<<j <<endl;
swap_data(&i, &j); //(one doubt why semicolan in userdefined function. 
cout << "After swap value j:" <<i <<" "<<j <<endl;
}




