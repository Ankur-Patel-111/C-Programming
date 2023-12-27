#include<iostream>
#include<string>
using namespace std;
namespace A
{
int x=50;
}
namespace B
{
int x=50;
}
namespace B 
{
int x=500;
}
int main()
{
using namespace B;
cout<<x;
}
