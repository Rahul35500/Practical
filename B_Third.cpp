// 11. Write a C++ program to demonstrate the order of evaluation of constructors and
// destructors.
#include <iostream>
using namespace std;

class Base
{
public:
    Base()
    {
        cout << "Base Class Constructor\n";
    }
    ~Base()
    {
        cout << "Base Class Destructor\n";
    }
};

class dev1 : public Base
{
public:
    dev1()
    {
        cout << "dev1 Class Constructor\n";
    }
    ~dev1()
    {
        cout << "dev1 Class Destructor\n";
    }
};

class dev2 : public dev1
{
public:
    dev2()
    {
        cout << "dev2 Class Constructor\n";
    }
    ~dev2()
    {
        cout << "dev2 Class Destructor\n";
    }
};

int main()
{
    dev2 D;
}
