//bank account related code SBI,ICICI code;
#include<iostream>
using namespace std;

// SBI ACCOUNT & ATM Detailes
namespace SBI
{
	int accno =123;
	void welcome_note()
	{
		cout << "Welcome to SBI" << endl;
	}
}

// ICICI ACCOUNT & ATM Detailes
namespace ICICI
{
	int accno =456;
	void welcome_note()

	{
		cout<<"Welcome to ICICI"<<endl;
	}
}
main ()
{
using namespace ICICI;
using SBI::accno;
cout << accno << endl;
welcome_note();


}

/*
{
	{
		using namespace SBI;
		cout << accno << endl;
		welcome_note();
	}
	using namespace ICICI;
	cout << accno << endl;
  	welcome_note();
}
*/


