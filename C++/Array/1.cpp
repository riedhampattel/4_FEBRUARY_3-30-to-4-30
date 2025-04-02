#include<iostream>
using namespace std;
int main()
{
    int sizea,sizeb;
    int a[100],b[100],c[200];
    int i;
    cout<<"\nEnter the size of an array = ";
    cin>>sizea;
    for(i=0;i<sizea;i++)
    {
        cout<<"\nEnter the element = ";
        cin>>a[i];
    }
    cout<<"\nEnter the size of an array = ";
    cin>>sizeb;
    for(i=0;i<sizeb;i++)
    {
        cout<<"\nEnter the element = ";
        cin>>b[i];
    }
    for(i=0;i<sizea;i++)
    {
        c[i] = a[i];
    }
    for(i=0;i<sizeb;i++)
    {
        c[sizea] = b[i];
        sizea++;
    }
    cout<<"\nMerged array = ";
    for(i=0;i<sizea;i++)
    {
        cout<<c[i]<<" ";
    }
    return 0;
}