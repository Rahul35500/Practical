#include <iostream>
using namespace std;
class Base
{
protected:
    int x;

public:
    Base(int a)
    {
        x = a;
        cout << "Constructing Parameterized Constructor of Base : X = " << x << endl;
    }
};
class derived : public Base
{
private:
    int y;

public:
    derived(int x, int y) : Base(x)
    {
        cout << "Constructing Parameterized Constructor of Base : X = " << x << endl;
        cout << "Constructing Parameterized Constructor of Dervied : y = " << y << endl;
    }
};
int main()
{
    derived obj(10, 20);
}