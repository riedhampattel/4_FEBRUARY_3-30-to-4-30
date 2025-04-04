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
    cout<<"\nEnter the index number = ";
    cin>>index;
    for(i=index;i<size-1;i++)//4/3
    {
        a[i] = a[i+1];
    }
    cout<<"\nArray after deletion = ";
    for(i=0;i<size-1;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}