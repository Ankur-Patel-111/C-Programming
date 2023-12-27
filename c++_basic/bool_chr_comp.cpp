// string in character by character comparision using boolalpha.

#include<iostream>
using namespace std;
int main()
{
string s1("india"),s2("vector");
bool rest;
rest = s1==s2;
cout <<boolalpha;
cout <<"s1==s2 : "<<  rest <<endl;

rest = s1!=s2;
cout <<"s1!=s2: " <<rest <<endl;

rest = s1>s2;
cout <<"s1>s2 : " <<rest <<endl;

rest = s1<s2;
cout <<"s1<s2 : " <<rest <<endl;

rest = s1>=s2;
cout <<"s1>=s2 : " <<rest <<endl;

rest = s1<=s2;
cout <<"s1<=s2 : " <<rest <<endl;
}
