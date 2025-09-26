#include<iostream>
using namespace std;
inline int square(int x)
{
    return x*x;
}
int y=20;
int main()
{
    /*inline function->
    An inline function is a request to the compiler to insert the complete body of the function 
    directly into the place where it is called, instead of performing the usual 
    function call (which involves jumping to the function’s code and then returning).
    This can make the program faster (by avoiding function call overhead), especially 
    for very small and frequently used functions. */
    int a=10;
    cout << "Square of " << a << " is " << square(a) << endl;
    cout<<y;
    return 0;
}