#include<iostream>
using namespace std;
class Student
{
    public :
        int id;
        string name;
        double per;
};
int main()
{
    Student s1,s2,s3;
    s1.id = 101;
    s1.name = "Rohan";
    s1.per = 98.56;

    cout<<"\nId = "<<s1.id;
    cout<<"\nName = "<<s1.name;
    cout<<"\nPercentage = "<<s1.per;
    return 0;
}