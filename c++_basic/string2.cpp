// string space and without space.

#include<iostream>
using namespace std;
 int  main()
{
string s;
int num;
cout<<sizeof(s) <<endl;
cout <<"\033[33m" "Enter the string..." <<endl;

//getline(cin,s);
cin >> s;
cout  << "string:" <<s <<endl;

cout <<"Enter the name..." <<endl;
cin >>s;
cout <<"name:" <<s <<endl;
cout <<"Enter the mobile number..." <<endl;
cin >>num;
cout <<"Number:" <<num <<endl;
}
