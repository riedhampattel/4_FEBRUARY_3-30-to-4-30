//Write a c++ program to take index number as an input from the user and print the element present on that index number.
#include<iostream>
using namespace std;
int main()
{
    int size,i,a[100];
    cout<<"\nEnter the size of an array = ";
    cin>>size;
    for(i=0;i<size;i++)
    {
        cout<<"\nEnter the element = ";
        cin>>a[i];
    }
    int index;
    cout<<"\nEnter the index number = ";
    cin>>index;//2
    if(index>=0 && index<size)
    {
        cout<<"\n"<<a[index]<<" is present on index number "<<index;
    }
    else
    {
        cout<<"\nThis index is not present in an array";
    }
    return 0;
}