#include<iostream>
using namespace std;
int main()
{
    int a[100],size,i,element,index;
    cout<<"\nEnter the size of an array = ";
    cin>>size;
    for(i=0;i<size;i++)
    {
        cout<<"\nEnter the element = ";
        cin>>a[i];
    }
    cout<<"\nEnter the element = ";
    cin>>element;
    cout<<"\nEnter the index number = ";
    cin>>index;
    for(i=size-1;i>=index;i--)//1/2
    {
        a[i+1] = a[i];
    }
    a[index] = element;
    cout<<"\nArray after insertion = ";
    for(i=0;i<=size;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}