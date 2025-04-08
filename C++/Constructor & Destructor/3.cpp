#include<iostream>
using namespace std;
class Demo
{
    private :
        int id;
        string name;
    public :
        Demo(int i,string n)//parameterized constructor
        {
            cout<<"\nParameterized constructor called";
            id = i;
            name = n;
        }
        Demo()//default constructor
        {
            cout<<"\nDefault constructor called";
        }
        Demo(Demo &obj)//copy constructor
        {
            cout<<"\nCopy constructor called";
            id = obj.id;
            name = obj.name;
        }
        void display()
        {
            cout<<"\nId = "<<id;
            cout<<"\nName = "<<name;
        }
};
int main()
{
    Demo d1(101,"xyz");
    d1.display();
    Demo d2(102,"abc");
    d2.display();
    Demo d3;
    d3 = d1;
    Demo d4(d2); 
    d3.display();
    d4.display();
    return 0;
}