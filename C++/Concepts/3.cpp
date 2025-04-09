#include<iostream>
using namespace std;
class Shape//abstract class
{
    public :
        virtual void display() = 0;//pure virtual function
};
class Circle : public Shape
{
    public :
        void display()
        {
            cout<<"\nThis is a circle class";
        }
};
class Square : public Shape
{
    public :
        void display()
        {
            cout<<"\nThis is a square class";
        }
};
int main()
{
    Shape *s;
    Circle c;
    s = &c;
    s->display();
    return 0;
}