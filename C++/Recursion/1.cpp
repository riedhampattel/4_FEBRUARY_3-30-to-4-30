#include<iostream>
using namespace std;
void display(int n)//recursive function
{
    if(n!=0)
    {
        cout<<"\nHello World";
        cout<<"\nBye";//3
        n--;//0
        display(n);
    }
}
int main()
{
    int num;
    cout<<"\nEnter the number = ";
    cin>>num;//3
    display(num);
    return 0;
}