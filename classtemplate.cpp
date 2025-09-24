#include<iostream>
using namespace std;
template<class T>
class Box{
    public:
    T value;
    Box(T v)
    {
        value=v;
    }
    T getvalue()
    {
        return value;
    }

};
int main()
{
    Box<int> obj1(21);
    Box<string> obj2("aniket");
    cout<<obj1.getvalue()<<endl;
    cout<<obj2.getvalue()<<endl;
    return 0;
}