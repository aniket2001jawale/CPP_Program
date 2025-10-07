#include<iostream>
using namespace std;
class student{
    int mark;
    int rollno;
    public:
    void inputdata()
    {
        cin>>mark>>rollno;
    }
    void display()
    {
        cout<<"mark:"<<mark<<endl;
        cout<<"rollno:"<<rollno<<endl;
    }
};
int main()
{
    student s1;
    s1.inputdata();
    s1.display();
    return 0;
}