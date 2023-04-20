#include <iostream>
using namespace std;
class Base1
{
    int data1;

public:
    Base1(int a)
    {
        data1 = a;
        cout << "Base1 class constructor called......" << endl;
    }
    void printDataBase1(void)
    {
        cout<<"The value of data1 is:"<<data1<<endl;
    }
};
class Base2
{
    int data2;

public:
    Base2(int a)
    {
        data2 = a;
        cout << "Base2 class constructor called......" << endl;
    }
    void printDataBase2(void)
    {
        cout<<"The value of data2 is:"<<data2<<endl;
    }
};
class Base3
{
    int data3;

public:
    Base3(int a)
    {
        data3 = a;
        cout << "Base3 class constructor called......" << endl;
    }
    void printDataBase3(void)
    {
        cout<<"The value of data3 is:"<<data3<<endl;
    }
};
class Derived : public Base1, public Base2, public Base3
{
    int derived1, derived2;
public:
    Derived(int a, int b, int c, int d,int e) : Base1(c), Base2(d), Base3(e)
    {
        derived1 = a;
        derived2 = b;
        cout << "Derived Class Conddtructor Called....." << endl;
    }
    void printDataDerived(void)
    {
        cout<<"The value of derived1 is:"<<derived1<<endl;
        cout<<"The value of derived2 is:"<<derived2<<endl;
    }
};

int main()
{
    Derived d(1, 2, 3, 4,5);
    d.printDataBase1();
    d.printDataBase2();
    d.printDataBase3();
    d.printDataDerived();
    return 0;
}