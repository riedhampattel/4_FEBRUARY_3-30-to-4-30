#include<iostream>
using namespace std;
class Parent
{
    public :
        void display()
        {
            cout<<"\nHello from Parent class";
        }
};
class Brother : public Parent
{

};
class Sister : public Parent
{

};
int main()
{
    Brother b;
    Sister s;
    b.display();
    s.display();
    return 0;
}