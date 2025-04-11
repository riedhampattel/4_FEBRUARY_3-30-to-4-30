#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream MyFile("first.txt");
    MyFile<<"Hello World"<<endl;
    MyFile<<"bye bye world"<<endl;
    MyFile.close();
    return 0;
}