#include<iostream>
using namespace std;
void swap(int a,int b)    //call by value
{
    a=a+b;
    b=a-b;
    a=a-b;
}
void swap1(int &a, int &b)  //call by reference
{
    a=a+b;
    b=a-b;
    a=a-b;
}
void swap2(int *a, int *b)  //call by pointer
{
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
}

int main()
{
    int x=10,y=15;
    cout<<x<<"\t"<<y<<endl;
    //swap(x,y);   //call by value
    //swap1(x,y);   //call by reference
    swap2(&x,&y);    //call by pointer
    cout<<x<<"\t"<<y;
    return 0;
}

