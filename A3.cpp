//3. Write a C++ program to create a class called COMPLEX and implement the following
// overloading functions ADD that return a complex number:
// (i) ADD (a, s2) – where „a‟ is an integer (real part) and s2 is a complex number
// (ii) ADD (s1, s2) – where s1 and s2 are complex numbers
#include <iostream>
using namespace std;
class complex
{
private:
    int real, image;

public:
    void inputName()
    {
        cout << "Enter the real or image number:";
        cin >> real >> image;
    }
    void Display()
    {
        cout << "complex number are:\n"
             << real << "+"
             << "i" << image<<endl;
    }
    complex ADD(int a, complex obj);
    complex ADD(complex s1, complex s2);
};
complex complex::ADD(int a, complex obj)
{
    obj.real = a + obj.real;

    return obj;
}
complex complex::ADD(complex s1, complex s2)
{
    complex s3;
    s3.real = s1.real + s2.real;
    s3.image = s1.image + s2.image;
    return s3;
}
int main()
{
    complex s1, s2, s3;
    int realNumber, chooseNumber;
    while (1)
    {
        cout << "1.ADD integer number with complex number:" << endl;
        cout << "2.ADD Two complex number:" << endl;
        cout << "3.Exit" << endl;
        cout << "Choose your option:" << endl;
        cout << "Enter the your choose number:" << endl;
        cin >> chooseNumber;
        switch (chooseNumber)
        {
        case 1:
        {
            cout << "Enter the integer number:" << endl;
            cin >> realNumber;
            s1.inputName();
            s2 = s2.ADD(realNumber, s1);
            s2.Display();
            break;
        }
        case 2:
        {
            s1.inputName();
            s2.inputName();
            s3=s3.ADD(s1, s2);
            s3.Display();
            break;
        }
        case 3:
        {
            exit(0);
        }
        default :{
            cout<<"you wrong option";
        }
        }
    }
}