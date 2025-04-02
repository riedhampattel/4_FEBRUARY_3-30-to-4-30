//Write a c++ program to take element from the user as an input from the user and print the index number of that element.
#include<iostream>
using namespace std;
int main()
{
    int size,a[100],i,element,index;
    cout<<"\nEnter the size of an array = ";
    cin>>size;
    for(i=0;i<size;i++)
    {
        cout<<"\nEnter the element = ";
        cin>>a[i];
    }
    cout<<"\nEnter the element you want to search = ";
    cin>>element;//2
    int flag = 0;
    for(i=0;i<size;i++)
    {
        if(element == a[i])
        {
            flag = 1;
            index = i;
            break;
        }
    }
    if(flag==1)
    {
        cout<<"\n"<<element<<" is present on index number "<<index;
    }
    else
    {
        cout<<"\nElement is not present in an array";
    }
    return 0;
}