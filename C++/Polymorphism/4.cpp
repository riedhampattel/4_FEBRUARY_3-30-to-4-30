#include<iostream>
using namespace std;
class GrandParent
{
    public :
        void display()
        {
            cout<<"\nHello from GrandParent class";
        }
};
class Parent : public GrandParent
{
    public :
        void display()
        {
            cout<<"\nHello from Parent class";
        }
};
class Child : public Parent
{
    public :
        void display()
        {
            cout<<"\nHello from Child class";
        }
};
int main()
{
    Child c;
    c.display();
    Parent p;
    p.display();
    return 0;
}