#include<iostream>
using namespace std;
class Demo
{
    private :
        int x = 10;
        string s1 = "Private";
    protected :
        int y = 11;
        string s2 = "Proceted";
    public :
        int z = 12;
        string s3 = "Public";
        void set(int a,string s)
        {
            x = a;
            s1 = s;
        }
        void get()
        {
            cout<<"\nValue of x = "<<x;
            cout<<"\nValue of s1 = "<<s1;
        }
};
class Derived : public Demo
{
    public :
        void get()
        {
            cout<<"\nValue of y = "<<y;
            cout<<"\nValue of s2 = "<<s2;
        }
};
int main()
{
    Demo d1;
    d1.get();
    d1.set(45,"Tops");
    d1.get();

    Derived d2;
    //procted ---> within the class or in derived class
    d2.get();

    cout<<"\nValue of z = "<<d1.z;
    cout<<"\nValue of s3 = "<<d1.s3;
    return 0;
}