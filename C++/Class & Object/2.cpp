#include<iostream>
using namespace std;
class Student
{
    private :
        int id;
        string name;
        double per;
    public :
        void set(int i,string n,double p)
        {
            id = i;
            name = n;
            per = p;
        }
        void get()
        {
            cout<<"\nId = "<<id;
            cout<<"\nName = "<<name;
            cout<<"\nPercentage = "<<per;
        }
};
int main()
{
    Student s1;
    s1.set(101,"Rohan",98.56);
    s1.get();

    Student s2;
    s2.set(102,"Rahul",85.45);
    s2.get();
    return 0;
}