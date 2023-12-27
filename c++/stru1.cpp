// in structure c compiler sizeof =0 byte and c++ compiler in 1 byte.
#include<iostream>
using namespace std;
struct st
{



};
int main()
{
struct st s;
printf("%ld\n",sizeof(s));
//cout <<sizeof(s) <<endl;


}
