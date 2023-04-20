#include <iostream>
#include <cmath>
using namespace std;
class Simplecalculator
{
    int a, b;

public:
    void getData()
    {
        cout << "Enter the value of a:" << endl;
        cin >> a;
        cout << "Enter the value of b:" << endl;
        cin >> b;
    }
    void performOperations()
    {
        cout << "The sum of a and b:" << a + b << endl;
        cout << "The subtraction of and b:" << a - b << endl;
        cout << "The multiplication of a and b:" << a * b << endl;
        cout << "The division of a and b:" << a / b << endl;
    }
};

class ScientificCalculator
{
    int a, b;

public:
    void get_data1()
    {
        cout << "Enter the value of a:" << endl;
        cin >> a;
        cout << "Enter the value of b:" << endl;
        cin >> b;
    }
    void performOperations1()
    {
        cout << "The value of cos a:" << cos(a) << endl;
        cout << "The value of cos b:" << cos(b) << endl;
        cout << "The value of expo a:" << exp(a) << endl;
        cout << "The value of tan a:" << tan(a) << endl;
    }
};
class hybridCalculator : public Simplecalculator, public ScientificCalculator
{
};
int main()
{
    hybridCalculator calc;
    calc.getData();
    calc.performOperations();
    calc.get_data1();
    calc.performOperations1();
    return 0;
}