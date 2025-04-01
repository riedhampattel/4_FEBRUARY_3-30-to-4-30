#include<iostream>
#include<math.h>
using namespace std;
void armstrong(int n)
{
    int power,i,rem,sum=0;
    int copy = n;
    int temp = n;
    int digit = 0;
    while(n!=0)
    {
        digit++;//2
        n = n/10;
    }
    for(i=1;i<=digit;i++)
    {
        rem = copy%10;
        power = pow(rem,digit);
        sum = sum + power;
        copy = copy/10;
    }
    if(sum==temp)
    {
        printf("%d ",temp);
    }
}
int main()
{
    int start,end,i;
    cout<<"\nEnter the starting number = ";
    cin>>start;//1
    cout<<"\nEnter the ending number = ";
    cin>>end;//2000
    for(i=start;i<=end;i++)
    {
        armstrong(i);
    }
    return 0;
}