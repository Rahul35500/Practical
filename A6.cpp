
// 6.Write a C++ program to create a class called STUDENT with data members USN, Name
// and Age. Using inheritance, create the class MARKS containing data members for 3
// subjects, percentage and create another class called SPORTS having data members name
// of the sport, achievements. Enter the data for at least 5 students. Display student details
// percentage and sport details for all the students separately.
#include <iostream>
using namespace std;
class STUDENT
{
private:
    int usn, age;
    char name[20];

public:
    void UserInput();
    void Studentdisplay();
};
void STUDENT::UserInput()
{
    cout << "Enter the USN number: ";
    cin >> usn;
    cout << "Enter the NAME of the student: ";
    cin >> name;
    cout << "Enter the age of the student:  ";
    cin >> age;
}
void STUDENT::Studentdisplay()
{
    cout << "-------DETAILS OF THE STUDENT------" << endl;
    cout << "NAME :" << name << endl;
    cout << "USN  :" << usn << endl;
    cout << "AGE  :" << age << endl;
}

class MARKS : public STUDENT
{
private:
    int marks1, marks2, marks3;

public:
    void MarksInput();
    void ShowMarks();
};

void MARKS::MarksInput()
{
    cout << "Enter the marks of the threee subject" << endl;
    cin >> marks1 >> marks2 >> marks3;
}
void MARKS::ShowMarks()
{
    cout << "---------------------------------------------" << endl;
    cout << "AVERAGE MARKS OF THE STUDENT: "
         << (marks1 + marks2 + marks3) / 3 << endl;
    cout << "---------------------------------------------" << endl;
}
class SPORTS : public MARKS
{
    char NameSport[20];
    char Achivement[30];

public:
    void GetSport();
    void ShowSport();
};
void SPORTS::GetSport()
{
    cout << "\n ENTER THE SPORTS NAME" << endl;
    cin >> NameSport;
    cout << "\n ENTER THE SPORTS ACHIEVEMENTS " << endl;
    cin >> Achivement;
}
void SPORTS::ShowSport()
{
    cout << "---------------------------------------------" << endl;
    cout << "-------THE SPORTS DETAILS ARE------ " << endl;
    cout << "SPORTNAME: " << NameSport << endl;
    cout << "ACHIVEMENT: " << Achivement << endl;
    cout << "---------------------------------------------" << endl;
}
int main()
{
    int studentNumber;
    SPORTS s[5];
    cout << "Enter the number of the student: " << endl;
    cin >> studentNumber;
    for (int i = 0; i < studentNumber; i++)
    {
        s[i].UserInput();
        s[i].MarksInput();
        s[i].GetSport();
    }
    for (int i = 0; i < studentNumber; i++)
    {
        s[i].Studentdisplay();
        s[i].ShowMarks();
        s[i].ShowSport();
    }
}