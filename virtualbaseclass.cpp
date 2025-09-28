#include<iostream>
using namespace std;
class A{
    public:
    void show()
    {
        cout<<"in base class A show method is call"<<endl;
    }
};
class B:virtual public A{

};
class C:virtual public A{

};
class D:public B,public C {

};
int main()
{
    D obj;
    obj.B::show();
    obj.C::show();
    obj.show();
    return 0;
}