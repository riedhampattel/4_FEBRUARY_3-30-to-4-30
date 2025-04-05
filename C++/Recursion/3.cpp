#include<iostream>
using namespace std;
int sum(int num)
{
    if(num!=0)
    {
        return num + sum(num-1);
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n;
    cout<<"\nEnter the number = ";
    cin>>n;//3
    int result = sum(n);
    cout<<"\nAddition of "<<n<<" number is = "<<result;
    return 0;
}