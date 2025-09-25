#include<iostream>
using namespace std;
class Box{
    private:
    int width;
    public:
    Box(int w)
    {
        width=w;
    }
    friend void printWidth(Box b);   //declare the friend function inside the class

};
void printWidth(Box b)
{
    cout<<"width of Box:"<<b.width<<endl;      //function defination in outside the class to accesed 
                                                //the the member of the private variable in the class
} 
int main()
{
    Box b1(10);
    printWidth(b1);
    return 0;
}