// 13. Write a C++ program to demonstrate copy constructor.
#include<iostream>
using namespace std;

class student 
{
	private:
		int roll,age,marks;
	public:
		student()
		{
			roll=age=marks=0;
		}
		student(int r, int a, int m)
		{
			roll=r;
			age=a;
			marks=m;
		}
		student(student &std)
		{
			roll=std.roll;
			age=std.age;
			marks=std.marks;
		}
		void display()
		{
			cout<<"Roll Number = "<<roll<<endl;
			cout<<"Age = "<<age<<endl;
			cout<<"Total Marks = "<<marks<<endl;
		}
};

int main()
{
	student s1;
	student s2(101,79,18);
	student s3=s2;
	cout<<"Student 1 Data : "<<endl;
	s1.display();
	cout<<"Student 2 Data : "<<endl;
	s2.display();
	cout<<"Student 3 Data : "<<endl;
	s3.display();
	 
}
