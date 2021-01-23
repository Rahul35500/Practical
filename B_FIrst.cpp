// 1. Write a C++ program to find the sum for the given variables using function with default
// arguments.
#include<iostream>
using namespace std;
void sumed(int a=10,int b=20);
int main()
{
    int a,b;
    sumed();

}
void sumed(int a,int b)
{
    int temp;
    temp=a+b;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    cout<<"sum="<<temp;
}
