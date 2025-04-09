#include<iostream>
using namespace std;
class GrandParent
{
    public :
        GrandParent()
        {
            cout<<"\nGrandParent constructor called";
        }
        void display()
        {
            cout<<"\nHello from GrandParent class";
        }
};
class Father : virtual public GrandParent
{
    public :
        Father()
        {
            cout<<"\nFather constructor called";
        }
};
class Mother : virtual public GrandParent
{
    public :
        Mother()
        {
            cout<<"\nMother constructor called";
        }
};
class Child : public Father,public Mother
{

};
int main()
{
    Child c;
    // c.display();
    return 0;
}