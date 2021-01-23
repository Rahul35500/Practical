// 8. Write a C++ program to calculate area and perimeter of rectangle using concepts of
// inheritance.
#include <iostream>
class Perimeter;
class Area;
class Rectangle;
using namespace std;
class Rectangle
{
protected:
float length,breadth;
public:
Rectangle()
{
    cout<<"Enter the length:"<<endl;
    cin>>length;
    cout<<"Enter the breadth:"<<endl;
    cin>>breadth;
}
};
class Area:public Rectangle
{
    public:
  float Area_Of_Rectangle()
  {
      return (length*breadth);
  }
};
class Perimeter:public Area
{
    public:
    float Perimeter_Of_Rectangle()
  {
      return (2*(length+breadth));
  }
};

int main()
{
     cout<<"Enter length and breadth of the Rectangle:"<<endl;
     Perimeter obj;
     cout<<"Area of the Reactangle :"<<obj.Area_Of_Rectangle()<<endl;
     cout<<"------------------------------------------------------"<<endl;
     cout<<"Perimeter of the Reactangle :"<<obj.Perimeter_Of_Rectangle()<<endl;
}
     