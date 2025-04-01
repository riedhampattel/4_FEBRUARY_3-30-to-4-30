#include<iostream>
using namespace std;
int main()
{
    int n1,n2,temp,GCD,i;
    cout<<"\nEnter the value in n1 = ";
    cin>>n1;//6
    cout<<"\nEnter the value in n2 = ";
    cin>>n2;//4
    
    temp = n1<n2 ? n1:n2;

    for(i=1;i<=temp;i++)
    {
        if(n1%i==0 && n2%i==0)
        {
            GCD = i;
        }
    }
    cout<<"\nGCD of "<<n1<<" and "<<n2<<" is = "<<GCD;
    return 0;
}