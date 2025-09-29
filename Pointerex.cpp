#include<iostream>
using namespace std;
int main()
{
    const char *s1="aniket Jawale";
    const char *s2="virat kohali";
    cout<<s1<<endl;
    cout<<s2<<endl;
    const char *temp;
    temp=s1;
    s1=s2;
    s2=temp;
    cout<<s1<<endl;
    cout<<s2<<endl;

    return 0;
}