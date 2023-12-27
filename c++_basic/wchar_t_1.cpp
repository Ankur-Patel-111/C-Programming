// cmd man locale 
#include<iostream>
#include<locale.h>
using namespace std;
int main()
{
wchar_t ch[10] ={0x0917,0x0941,0x0992};
setlocale(LC_ALL,"");
wcout <<ch <<endl;
}

