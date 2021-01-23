// 10.Write a C++ program to swap the values of two variables and demonstrates a function
// using call by reference.
#include<iostream>
using namespace std;
void swapping(int &a,int &b);
int main()
{
    int a=10,b=20;
    cout<<"After swapping"<<endl;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    swapping(a,b);
    cout<<"Befor swapping"<<endl;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
}
void swapping(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
}