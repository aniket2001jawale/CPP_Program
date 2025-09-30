#include<iostream>
using namespace std;
class Example
{
    public:
    int var;
    Example(int t)
    {
        var=t;
    }
    int getValue() const
    {
        return var;
    }
    void setValue(int r)
    {
        var=r;
    }

};
void showValue(const Example& d) 
{  
    cout << d.getValue() << endl;   //20
}
int main()
{
    Example ex1(10);                        //when we dclared the object as not const
    cout<<ex1.getValue()<<endl;   //10
    ex1.setValue(20);
    cout<<ex1.getValue()<<endl;   //20

    const Example ex2(100);
    cout<<ex2.getValue()<<endl;     // 100     //You can only have const objects of a class.
                                        //Const objects can only call const member functions.
    //ex2.setValue(200);                  //when we call not const funtion its through the error
    cout<<ex2.getValue()<<endl;    //100

    showValue(ex1); 




    return 0;
}