#include<iostream>
using namespace std;
int fact(int num)
{
    if(num!=0)
    {
        return num * fact(num-1);
    }
    else
    {
        return 1;
    }
}
int main()
{
    int n;
    cout<<"\nEnter the number = ";
    cin>>n;//5
    int result = fact(n);
    cout<<"\nFactorial of "<<n<<" is "<<result;
    return 0;
}