#include<iostream>
using namespace std;
long int power(long int b,long int e)
{
    if(e==0)
    {
        return 1;
    }
    else if(e==1)
    {
        return b;
    }
    else
    {
        return b * power(b,e-1);
    }
}
int main()
{
    long int base,exp;
    cout<<"Enter the base = ";
    cin>>base;//2
    cout<<"Enter the exponent = ";
    cin>>exp;//3
    long int result = power(base,exp);
    cout<<"\nPower = "<<result;
    return 0;
}