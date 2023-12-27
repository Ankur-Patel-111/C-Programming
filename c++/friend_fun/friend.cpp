//using friend function father and son salary
#include<iostream>
using namespace std;
class Father;
class Son
{
	char name[20];
	float sal;
	public:
	void set_data()
	{
		cout<<"Enter the son name and salary:" <<endl;
		cin>>name >>sal;
	}
	void get_data()
	{
		cout<<"son name:"<<name <<endl;
		cout<<"son sal:" <<sal <<endl;
	}

	friend void income_tax(Father,Son);
};
class Father
{
	char name[20];
	float sal;
	public:
	void set_data()
	{
		cout<<"Enter the father name and salary:" <<endl;
		cin>>name >>sal;
	}
	void get_data()
	{
		cout<<"father name:" <<name <<endl;
		cout<<"father sal:" <<sal <<endl;
	}
	friend void income_tax(Father,Son );
};

void income_tax(Father f1,Son s1)
{
	float total;
	total=f1.sal+s1.sal;
	if(total<=10000)
		cout<<"no need to pay tax:"<<endl;
	else
		cout<<"pay 10%_from your salary:"<<endl;



}
int main()
{
	Father f1;
	Son s1;
	f1.set_data();
	s1.set_data();
	income_tax(f1,s1);
}




