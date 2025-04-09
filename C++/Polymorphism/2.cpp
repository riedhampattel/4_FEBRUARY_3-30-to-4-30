#include<iostream>
using namespace std;
//compile time polymorphism
//constructor overloading
class Shape
{
    //square rectangle circle triangle
    public :
        Shape(int side)
        {
            cout<<"\nThe area of the square is = "<<side*side;
        }
        Shape(int l,int b)
        {
            cout<<"\nThe area of the rectangle is = "<<l*b;
        }
        Shape(double r)
        {
            cout<<"\nThe area of the circle is = "<<3.14*(r*r);
        }
        Shape(int b,double h)
        {
            cout<<"\nThe area of the triangle is = "<<0.5*(b*h);
        }
};
int main()
{
    Shape s1(5);
    Shape s2(5,4);
    Shape s3(2.5);
    Shape s4(5,2.5);
    return 0;
}