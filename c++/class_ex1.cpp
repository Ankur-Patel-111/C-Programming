// ex-1 cash and gold.
#include<iostream>
using namespace std;
class Family_A
{
	int cash;
	int gold;
	public:
	void set_data(Family_A * const this)
	{
		cout <<"Enter the cash and gold" <<endl;
		cin >>this->cash >>this->gold;
	}
	void get_data(Family_A * const this)
	{
		cout <<" cash - " <<this->cash <<endl;
		cout <<" Gold - " <<this->gold <<endl;
	}

};

int main()
{
	Family_A a1,a2;
	Family_A::set_data(&a1);
	Family_A::set_data(&a2);
	Family_A::get_data(&a1);
	Family_A::get_data(&a2);

}
