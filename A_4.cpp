// 4.Write a C++ Program to compare two strings by overloading == operator.
#include <iostream>
#include <string>
#include <cstring>
#include <stdlib.h>
using namespace std;
class Compare
{
private:
    char str[29];

public:
    void UserInput()
    {
        gets(str);
    }
    bool operator==(Compare s)
    {
        bool result=strcmp(str, s.str);
        cout<<result<<endl;
        if (!strcmp(str, s.str))///becoz strcmp return 0 value...
            return true;

        return false;
    }

};
 int main()
{
    Compare s1, s2;
    cout << "Enter first string: ";
    s1.UserInput();
    cout << "Enter Second string: ";
    s2.UserInput();
    if (s1 == s2)
    {
        cout << "String are equal.";
    }
    else
    {
        cout << "string are not equal.";
    }
}
 
 
