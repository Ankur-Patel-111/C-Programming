#include<iostream>
using namespace std;
class Array
{
int a[2]
public:

Array(){

}

void set_data(void){
cout << "Enter elements\n";
int i;
for(i=0;i<n;i++){
cin >> this->a[i];
}
}

void get_data(void){
cout << "Array element : ";
int i;
for(i=0;i<n;i++){
cout << a[i] << " " ;
}
cout << endl;
}

};
int main()
{
int n;
Array a1;
a1.set_data();
a1.get_data();
}
