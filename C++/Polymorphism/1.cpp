#include<iostream>
using namespace std;
//compile time polymorphism
//function overloading
class Shape
{
    //square rectangle circle triangle
    public :
        void area(int side)
        {
            cout<<"\nThe area of the square is = "<<side*side;
        }
        void area(int l,int b)
        {
            cout<<"\nThe area of the rectangle is = "<<l*b;
        }
        void area(double r)
        {
            cout<<"\nThe area of the circle is = "<<3.14*(r*r);
        }
        void area(int b,double h)
        {
            cout<<"\nThe area of the triangle is = "<<0.5*(b*h);
        }
};
int main()
{
    Shape s;
    s.area(4);
    s.area(4,5);
    s.area(2.5);
    s.area(2,2.5);
    return 0;
}