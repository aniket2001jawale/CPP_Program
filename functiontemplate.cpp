#include<iostream>
using namespace std;
template<typename T>
T add(T a,T b)
{
    return a+b;
}
int main()
{
    cout<<add<int>(10,20)<<endl;                 //30
    cout<<add(30,60)<<endl;                 //90
    cout<<add<float>(12.34,21.56)<<endl;         //33.9
    cout<<add<string>("aniket","jawale")<<endl;   //aniketjawale
    return 0;
}
/*
function template is used when same function with different datatype that time no need of
write diffrent function 
synax:
template<typename T>
*/