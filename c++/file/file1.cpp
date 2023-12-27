#include<iostream>
#include<fstream>
using namespace std;
int main()
{
char s[20];
ifstream fin;
fin.open("Data");
fin.getline(s,20);
cout<<s<<endl;
fin.close();


}

