#include<iostream>
using namespace std;
int main()
{
    int num,i,j;
    cout<<"\nEnter the number = ";
    cin>>num;//10
    cout<<"\nPrevious prime number = ";
    for(i=num;i>=1;i--)
    {
        int num = i;
        int flag = 1;
        for(j=2;j<num;j++)
        {
            if(num%j==0)
            {
                flag = 0;
                break;
            }
        }
        if(flag==1)
        {
            cout<<" "<<i;
            break;
        }
    }
    return 0;
}