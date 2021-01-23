// 12.Write a C++ program to swap two numbers using friend functions.
#include <iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;
 
class sample
{
private:
    int a, b;

public:
    void SetData(int x, int y)
    {
        a = x;
        b = y;
    }
    void Display()
    {
        cout << "a=" << a << endl;
        cout << "b=" << b << endl;
    }
    friend void swapping(sample &);
};
void swapping(sample &obj)
{
    int temp;
    temp = obj.a;
    obj.a = obj.b;
    obj.b = temp;
}
int main()
{
    sample obj;
    obj.SetData(10, 20);
    cout << "Before swapping:" << endl;
    obj.Display();
    swapping(obj);
    cout << "After swapping:" << endl;
    obj.Display();
}
