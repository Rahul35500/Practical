// . Write a C++ program to perform arithmetic operations using class template.
#include<iostream>
using namespace std;

template<class T>
class Airthmatic
{
	T value1,value2;
	public:
		Airthmatic( T first, T second)
		{
			value1=first;
			value2=second;
		}
		T add()
		{
			return value1+value2;
		}
		T sub()
		{
			return value1-value2;
		}
		T product()
		{
			return value1*value2;
		}
		T division()
		{
			return value1/value2;
		}
};

int main()
{
	Airthmatic <int>intobj(500,100);
	cout<<"Addition of integer number = "<<intobj.add()<<endl;
	cout<<"Subtraction of integer number = "<<intobj.sub()<<endl;
	cout<<"Product of integer number = "<<intobj.product()<<endl;
	cout<<"Division of integer number = "<<intobj.division()<<endl;
	
	Airthmatic <double>doubleobj(99.99,11.11);
	cout<<"Addition of double number = "<<doubleobj.add()<<endl;
	cout<<"Subtraction of double number = "<<doubleobj.sub()<<endl;
	cout<<"Product of double number = "<<doubleobj.product()<<endl;
	cout<<"Division of double number = "<<doubleobj.division()<<endl;
	
	return 0;
}
