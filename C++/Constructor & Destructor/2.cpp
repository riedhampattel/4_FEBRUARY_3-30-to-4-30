#include<iostream>
using namespace std;
class Student
{
    private :
        int id;
        string name;
    public :
       Student(int i,string n)//parameterized constructor
       {
            id = i;
            name = n; 
       } 
       void display()
       {
            cout<<"\nId = "<<id;
            cout<<"\nName = "<<name;
       }
};
int main()
{
    Student s1(101,"Rohan");
    s1.display();
    return 0;
}