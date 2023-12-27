// first note inside the block 
#include<iostream>
using namespace std;
namespace first
{
	int x=10;
	void welcome_note()
	{
		cout <<"welcome fisrt note" <<endl;
	}
}

namespace second
{
int x=20;
void welcome_note()
{
cout <<"welcome second note" <<endl;
}
}



int main()
{
{
	using namespace first;
	cout <<x <<endl;
	welcome_note();
}
{
using namespace second;
cout <<x <<endl;
welcome_note();
}
}
