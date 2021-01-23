//Q 1.Write a C++ program to define a STUDENT class with USN, Name and Marks in 3 tests of
// subject. Declare an array of 10 STUDENTS objects. Using appropriate functions, find the
// average of two better marks for each student. Print the USN, Name and average marks.
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using namespace std;
class student
{
public:
    int m1, m2, m3;
    char usn[20], name[30];
    float avg;

public:
    void read();
    void average();
    void display();
};
void student::read()
{
    cout << "Enter the usn number:" << endl;
    cin >> usn;
    cout << "Enter the name of the student " << endl;
    cin >> name;
    cout << "Enter the first marks of student:" << endl;
    cin >> m1;
    cout << "Enter the second marks of student:" << endl;
    cin >> m2;
    cout << "Enter the third marks of student:" << endl;
    cin >> m3;
}
void student::average()
{
    if (m1 < m2 && m1 < m3)
    {
        avg = (m2 + m3 )/ 2;
    }
    else if (m2 < m3)
    {
        avg = (m1 + m3 )/ 2;
    }
    else
    {
        avg = (m1 + m2) / 2;
    }
}
void student::display()
{
    cout << ":::::Details of the student :::::::" << name << endl;
    cout << "USN number of the student=" << usn << endl;
    cout << "Name of the student=" << name << endl;
    cout << "first marks of student=" << m1 << endl;
    cout << "second marks of student=" << m1 << endl;
    cout << "Third marks of student=" << m1 << endl;
    cout << "------------------------------------" << endl;
    cout << "best average marks of the student=" << avg;
}
int main()
{
    int n;
    cout << "Enter the number of the student" << endl;
    cin >> n;
    student array_object[10];
    for (int i = 0; i < n; i++)
    {
        array_object[i].read();
    }
    for (int i = 0; i < n; i++)
    {
        array_object[i].average();
    }
    for (int i = 0; i < n; i++)
    {
        array_object[i].display();
    }
}
