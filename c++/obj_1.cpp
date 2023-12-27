//class complex and object example
#include<iostream>
using namespace std;
class Complex
{
	//data members.
	int real;
	int img;
	public:
	//member fucntion.
	void set_data(int r, int i)
	{
		real=r,img=i;
	}
	void get_data()
	{
		cout <<"complex number:";
		if(img<0)
			cout <<real <<img <<"j" <<endl;
		else
			cout <<real <<"+" <<img <<"j" <<endl;
	}

	void addition1(Complex obj1, Complex obj2){
		cout<<"call by object:" <<endl;
		real=obj1.real+obj2.real;
		img=obj1.img+obj2.img;

	}
	void addition2(Complex & obj1, Complex & obj2){
		cout<<"call by Refrence:" <<endl;
		real=obj1.real+obj2.real;
		img=obj1.img+obj2.img;
	}
void addition3(Complex* ptr1, Complex* ptr2)
{
cout<<"call by address:"<<endl;
real=ptr1->real+ptr2->real;
img=ptr1->img+ptr2->img;
}

};
int main()
{
	Complex c1,c2,c3,c4,c5;
	c1.set_data(10,20);
	c2.set_data(100,200);
c1.get_data();
c2.get_data();
	c3.addition1(c1,c2);
	c3.get_data();
	c4.addition2(c1,c2);
	c4.get_data();
c5.addition3(&c1,&c2);
c5.get_data();

}
