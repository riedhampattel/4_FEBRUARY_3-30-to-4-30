#include<iostream>
using namespace std;
class GrandParent
{
    public :
        void display1()
        {
            cout<<"\nHello from GrandParent class";
        }
};
class Parent : public GrandParent
{
    public :
        void display2()
        {
            cout<<"\nHello from Parent class";
        }
};
class Child : public Parent
{

};
int main()
{
    Child c1;
    c1.display1();
    c1.display2();
    return 0;
}