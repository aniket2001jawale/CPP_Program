#include<iostream>
using namespace std;
//Exception handling in C++ is a way to handle runtime
// errors gracefully using try, catch, and throw keywords instead of crashing the program.
int main()
{
    try{
        int a=10,b=0;
        if(b==0)
        {
            throw runtime_error("divide by zero is not allowed");
        }
        cout<<"ans:"<<a/b<<endl;
    }
    catch(runtime_error &e)    // Catch specific exception
    {
        cout<<"error:"<<e.what()<<endl;
    }
    catch(...)  // Catch all other exceptions
    {
        cout<<"unknown exception is occoured"<<endl;
    }
    cout<<"program end......."<<endl;

    return 0;
}