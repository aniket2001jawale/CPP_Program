#include<iostream>
using namespace std;
class Emp{
    public:
    char name[20];
    int empid;
    void inputdata()
    {
        gets(name);
        cin>>empid;
    }
    void display()
    {
        cout<<"name of emp:"<<name<<endl;
        cout<<"empid:"<<empid<<endl;
    }
};
class fulltimeemp: public Emp{
    public:
    int sal;
    void inputdata()
    {
        Emp::inputdata();
        cin>>sal;
    }
    void display()
    {
        cout<<"sal of emp:"<<sal<<endl;
    }
};
int main()
{
    fulltimeemp f1;
    f1.inputdata();
    f1.Emp::display();    //if we create the object of derived class and function name is same in base and derived 
    //so that if we call f1.display its only display derived class function but if we call the base class function
    //we call f1.Emp::display()
    f1.display();

    return 0;
}