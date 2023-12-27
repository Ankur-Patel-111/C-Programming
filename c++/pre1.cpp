//
#include<iostream>
#include<string>
using namespace std;
namespace A
{
int var=10;
}
namespace B
{
int count=5;
}
int main()
{
using namespace B;
cout<<A::var <<endl;
}

