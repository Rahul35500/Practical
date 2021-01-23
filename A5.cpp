//5.Write a C++ program to perform addition of two matrices by overloading + operator.
#include<iostream>
using namespace std;
class Matrix
{
    private:
    int ArrayMatrix[10][10],m,n;
    int i,j;
    public:
    void InputMatrix();
    void DisplayMatrix();
    Matrix operator+(Matrix obj);
};
void Matrix::InputMatrix()
{
    cout<<"Enter the order of matrix"<<endl;
    cin>>m>>n;
    cout<<"ENTER THE ELEMENTS OF MATRIX :"<<endl;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>ArrayMatrix[i][j];
        }
    }
}
void Matrix::DisplayMatrix()
{
    for(i=0;i<m;i++)
    {
       cout<<" ";
        for(j=0;j<n;j++)
        {
            cout<<ArrayMatrix[i][j]<<"\t";
        }
            cout<<endl;
    }
}
Matrix Matrix::operator+(Matrix obj)
{
    Matrix obj2;
    if(n==obj.m)
    {
        obj2.m=m;
		obj2.n=obj.n;
        for(i=0;i<m;i++)
        {
            for(int j=0;j<obj.n;j++)
            {
                obj2.ArrayMatrix[i][j]=ArrayMatrix[i][j]+obj.ArrayMatrix[i][j];
            }
        }
    return obj2;
    }
    else
	cout<<"\n ADD IS NOT POSSIBLE ";

}
int main()
{
    Matrix a,b,c;
    cout<<"ENTER A MATRIX ORDER AND ELEMENTS"<<endl;
    a.InputMatrix();
    cout<<"ENTER B MATRIX ORDER AND ELEMENTS"<<endl;
    b.InputMatrix();
    c=a+b;
    cout<<" ADDITION OF TWO MATRIX IS = "<<endl;
    c.DisplayMatrix();
}