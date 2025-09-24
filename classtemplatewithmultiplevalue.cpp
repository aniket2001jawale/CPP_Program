#include<iostream>
using namespace std;
template<class T1, class T2>
class Box{
    public:
    T1 sal;
    T2 val;
    Box(T1 s, T2 v)
    {
        sal=s;
        val=v;
    }
    void getvalue()
    {
        cout<<"sal:"<<sal<<endl;
        cout<<"val:"<<val<<endl;
    }
};
int main()
{
    Box<int ,int> obj1(10,20);
    Box<int ,string> obj2(21,"aniket");
    obj1.getvalue();
    obj2.getvalue();
    return 0;
}