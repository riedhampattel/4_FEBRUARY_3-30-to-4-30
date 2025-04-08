#include<iostream>
using namespace std;
void display(int &n)
{
    n = 20;
    cout<<"\nValue of n = "<<n;
    cout<<"\nAddress of n = "<<&n;
}
int main()
{
    int a = 10;
    display(a);
    cout<<"\nValue of a = "<<a;
    cout<<"\nAddress of a = "<<&a;
    return 0;
}