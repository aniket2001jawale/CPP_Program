#include<iostream>
using namespace std;
class A
{
    private:                         //if the class B is the friend class declared in the class A
    int var;                         //then All the member function of class A can be access in the class B
    public:
    A(int t)
    {
        var=t;
    }
    friend class B;
};
class B{
    public:
    void display(A obj)
    {
        cout<<"display value:"<<obj.var;
    }

};
int main()
{
    A s1(100);
    B sar;
    sar.display(s1);
    return 0;
}