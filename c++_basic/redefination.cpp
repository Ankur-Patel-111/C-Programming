
// namespace in redefination is possible or not?

#include<iostream>
using namespace std;

namespace first
{
int x=10;
}
namespace first
{
int y=100;
}


namespace second
{
int y=20;
}

main()
{
using namespace first;
cout << x << " " << y <<endl;
//using namespace second;
//cout << y <<endl;

}
