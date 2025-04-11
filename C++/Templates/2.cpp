#include<iostream>
using namespace std;
template <typename T,int size>
void sort(T (&arr)[size])
{
    int i,j;
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(arr[i]>arr[j])
            {
                T temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
int main()
{
    int a[5] = {4,2,3,1,5},i;
    sort(a);
    cout<<"\nArray a = ";
    for(i=0;i<5;i++)
    {
        cout<<a[i]<<" ";
    }

    char b[5] = {'q','w','e','r','t'};
    sort(b);
    cout<<"\nArray b = ";
    for(i=0;i<5;i++)
    {
        cout<<b[i]<<" ";
    }

    string c[5] = {"Apple","Grapes","Watermelon","Kiwi","Banana"};
    sort(c);
    cout<<"\nArray c = ";
    for(i=0;i<5;i++)
    {
        cout<<c[i]<<" ";
    }
    return 0;
}