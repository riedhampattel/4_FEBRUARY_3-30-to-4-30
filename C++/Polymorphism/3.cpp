#include<iostream>
using namespace std;
class Demo
{
    private :
        int x,y;
    public :
        Demo()
        {
            x = 0;
            y = 0;
        }
        Demo(int a,int b)
        {
            x = a;
            y = b;
        }
        Demo operator&&(Demo &obj)
        {
            Demo temp;
            temp.x = x && obj.x;
            temp.y = y && obj.y;
            return temp;
        }
        void display()
        {
            cout<<"\nThe value of x = "<<x;
            cout<<"\nThe value of y = "<<y<<endl;
        }
};
int main()
{
    int a = 10,b = 20;
    int c = a + b;
    Demo d1(10,20);
    Demo d2;
    Demo d4(20,30);
    Demo d3 = d1 && d2;
    d1.display();
    d2.display();
    d3.display();
    d4.display();
    return 0;
}