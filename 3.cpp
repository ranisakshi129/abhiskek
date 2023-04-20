#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    string name;
    string content;
    ofstream hout("sample.cpp"); //write operation
    cout<<"Enter your name:";
    cin>>name;
    hout<<name<<" is my name";
    //hout.close();
    ifstream hin("sample1.cpp");   //read operation
    hin>>content;
    getline(hin,content);
    //getline(hin,st2);
    cout<<"The conent of the file is :"<<content;
    //hin.close();
    return 0;
}