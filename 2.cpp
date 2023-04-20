#include<iostream>
using namespace std;
class Baseclass
{
    public:
    int var_base;
    void display()
    {
        cout<<"Displyaing the base class Variable var_base:"<<var_base<<endl;
    }
};
class Derivedclass: public Baseclass
{
    public:
    int var_derived;
    void display()
    {
        cout<<"Displyaing the derived class Variable var_derived:"<<var_derived<<endl;
    }
};
int main()
{
    Baseclass * base_class_pointer;
    Derivedclass * derived_class_pointer;
    Baseclass obj_base;
    Derivedclass obj_derived;
    base_class_pointer = &obj_derived;
    base_class_pointer->var_base=34;
    base_class_pointer->display();
    base_class_pointer = &obj_base;
   // base_class_pointer->var_derived =78;    //Baseclass has no member named var_derived
    //base_class_pointer->display();
    derived_class_pointer = &obj_derived;
    derived_class_pointer->var_derived = 196;
    derived_class_pointer->display();
    //derived_class_pointer-> var_base= 56;    //Derivedclass has no member named var_base
    // derived_class_pointer->display();





     return 0;
}