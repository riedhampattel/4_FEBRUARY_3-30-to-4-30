#include<iostream>
using namespace std;
class Student
{
    public :
        Student()//default constructor
        {
            cout<<"\nHello from Student class";
        }
        ~Student()//destructor
        {
            cout<<"\nBye Bye from Student class";
        }
};
int main()
{
    Student s1;
    Student s2,s3;
    return 0;
}