// 7. Write a C++ program to demonstrate increment operator overloading.
 
#include<iostream>
using namespace std;

class increment
{
	private:
		int i;
	public:
	increment()
	{
		i=0;
	}
	increment operator ++()
	{
		increment temp;
		++i;
		temp.i=i;
		return temp;
	}
	void display()
	{
		cout<<"i = "<<i<<endl;
	}
};

int main()
{
	increment obj, obj1;
	obj.display();
	obj1.display();
	obj1=++obj;
	
	obj.display();
	obj1.display();
	return 0;
}
