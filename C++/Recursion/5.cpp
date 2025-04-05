#include<iostream>
using namespace std;
int sumarr(int arr[],int size)
{
    if(size!=0)
    {
        return arr[size-1] + sumarr(arr,size-1);
    }
    else
    {
        return 0;
    }
}
int main()
{
    int size,a[100],i;
    cout<<"Enter the sie of an array = ";
    cin>>size;
    for(i=0;i<size;i++)
    {
        cout<<"Enter the element in a["<<i<<"] = ";
        cin>>a[i];
    }
    int result = sumarr(a,size);
    cout<<"\nThe addition of all the elements in an array = "<<result;
    return 0;
}