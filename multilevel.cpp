#include<iostream>
using namespace std;
class student
{
    protected:
    int roll_number;
    public:
    void set_roll_number(int);
    void get_roll_number(void);
};
void student :: set_roll_number(int r)
{
    roll_number=r;
}
void student :: get_roll_number()
{
    cout<<"The roll number  is"<<roll_number<<endl;
}
class exam : public student
{
      protected:
      float maths;
      float physics;
      public:
      void set_marks(float,float);
      void get_marks(void);
};
void exam :: set_marks(float m,float n)
{
     maths=m;
     physics=n;
}
void exam :: get_marks()
{
    cout<<"The marks obtained in maths is:"<<maths<<endl;
    cout<<"The marks obtained in physics is:"<<physics<<endl;
}
class result : public exam{
    float percentage;
    public:
    void display_results()
    {
        get_roll_number();
        get_marks();
        cout<<"Your percentage is"<<(maths+physics)/2<<"%"<<endl;
    }
};
int main()
{
    result sakshi;
    sakshi.set_roll_number(420);
    sakshi.set_marks(94.0,92.0);
    sakshi.display_results();
     return 0;
}