// 2nd time nested namespace example.

#include<iostream>
using namespace std;
namespace first
{
	int x=20;
	namespace second
	{
		int x=200;
		namespace third
		{
			int x=2000;
		}
	}
}
int main()
{
namespace _data = first::second::third;
        cout <<_data::x <<endl;

//        cout <<first::x <<endl;

//	cout <<first::second::x<<endl;

//	cout <<first::second::third::x<<endl;

//cout << first::x << " " << first::second::x << " " << first::second::third::x << endl;


}
