// 7. Write a C++ program to sort elements using bubble sort technique
// applying function
#include<iostream>
using namespace std;
template<typename T>
void bubble(T arr[],int n)
{
                int temp;
    for(int i=0;i<n-1;i++)
    {
    for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
           
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
        }
    }
}
int main()
{
    int arr[50],m,n;
    double arr1[50];
    cout<<"SORTED ARRAYA IN INTEGER:\n";
    cout<<"Enter the size of the array:"<<endl;
    cin>>m;
    cout<<"Enter the list of the array:"<<endl;
    for(int i=0;i<m;i++){
    cin>>arr[i];
    }
    bubble(arr,m);
    cout<<"Sorted array are:"<<endl;
     for(int i=0;i<m;i++){
    cout<<arr[i]<<" ";
     }
    cout<<"\nSORTED ARRAYA IN DOUBLE:\n";
    cout<<"Enter the size of the array:"<<endl;
    cin>>n;
    cout<<"Enter the list of the array:"<<endl;
    for(int i=0;i<n;i++){
    cin>>arr1[i];
    }
    bubble(arr1,n);
    cout<<"\nSorted array are:"<<endl;
     for(int i=0;i<n;i++){
    cout<<arr1[i]<<" ";
     }
   
}