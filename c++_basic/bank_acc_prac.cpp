//bank sbi & icici code practice.

#include<iostream>
using namespace std;
//SBI Details
namespace SBI
{
int accno=1111;
void welcome_note();
}
void SBI::welcome_note()
{
cout <<"Welcome to SBI:" <<endl;
}

// ICICI Details
namespace ICICI
{
int accno=2222;
void welcome_note();
}
void ICICI::welcome_note()
{
cout <<"Welcome to ICICI:" <<endl;
}



// PNB Details
namespace PNB
{
int accno=3333;
void welcome_note();
}
void PNB::welcome_note()
{
cout <<"Welcome to PNB:" <<endl;
}

//HDFC Details
namespace HDFC
{
int accno=4444;
void welcome_note();
}
void HDFC::welcome_note()
{
cout <<"Welcome to HDFC:" <<endl;
}

int main() 
/*
{
using namespace SBI;
{
using namespace ICICI;
cout <<accno << endl;
}
}
*/

{
{
using namespace SBI;
cout <<SBI::accno <<endl;
SBI::welcome_note();
}

{
using namespace ICICI;
cout <<ICICI::accno <<endl;
ICICI::welcome_note();
}

{
using namespace PNB;
cout <<PNB::accno <<endl;
PNB::welcome_note();
}

{
using namespace HDFC;
cout <<HDFC::accno <<endl;
HDFC::welcome_note();
}
}
// -------==== ERROR ====----------

