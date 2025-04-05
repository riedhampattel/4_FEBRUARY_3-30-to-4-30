#include<iostream>
using namespace std;
int fibo(int num)
{
    if(num == 0)
    {
        return 0;
    }
    else if(num == 1)
    {
        return 1;
    }
    else
    {
        return fibo(num-1) + fibo(num-2);
    }
}
int main()
{
    int n;
    cout<<"Enter the term = ";
    cin>>n;//2
    int result = fibo(n);
    cout<<"\nnth element of a fibonacci series is = "<<result;
    return 0;
}