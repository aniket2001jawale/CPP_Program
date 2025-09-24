#include<iostream>
using namespace std;
template<typename T1, typename T2>
void display(T1 x , T2 y)
{
    cout<<"name of emp:"<<x<<endl;
    cout<<"salary of emp:"<<y<<endl;
}
int main()
{
    display("aniket",50000);
    display("nitin",340000);
    return 0;
}