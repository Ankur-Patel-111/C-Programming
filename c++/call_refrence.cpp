//  call by reference using c++.
#include<iostream>
using namespace std;
void swap_data(int &p, int &q )
{
int t;
t=p;
p=q;
q=t;
}
main()
{
int i=50,j=100;
cout <<"before the swap i and j :" <<i << " " <<j <<endl;
swap_data(i,j);
cout <<"After the swap i and j :" <<i << " " <<j <<endl;

}
