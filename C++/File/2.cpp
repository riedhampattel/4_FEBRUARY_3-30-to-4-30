#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string text;
    ifstream MyFile("first.txt");
    while(getline(MyFile,text))
    {
        cout<<text<<endl;
    }
    MyFile.close();
    return 0;
}