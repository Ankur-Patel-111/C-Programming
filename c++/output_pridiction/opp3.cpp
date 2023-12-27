#include<iostream>
using namespace std;
namespace A
{
int k=123;
}
namespace B
{
int k=456;
}
int main()
{
int k=20;
using namespace B;
cout <<k;
}
