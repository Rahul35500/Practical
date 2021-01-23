// Write a C++ program to convert one class type to another class type.
#include<iostream>
using namespace std;

class Destination
{
	float a;
	public:
		Destination(int d)
		{
			a=d/2;
		}
		void show()
		{
			cout<<"half value = "<<endl<<a;
		}
};

class Source
{
	float p;
	public:
		Source(float x)
		{
			p=x;
		}
		operator Destination()
		{
            cout<<"Value of p :"<<p;
			return Destination(p);
		}
};

int main()
{
	float b;
	cout<<"Enter a Number = "<<endl;
	cin>>b;
	Source src(b);
	Destination des=src;
	des.show();
	return 0;
}
