#include<iostream>
#include<string>
using namespace std;
struct Date{
    int date;

};
struct Book{
    char title[20];
    string str;
    Date d;

};

int main()
{
    Book K;
    Book X={"CPP","Aniket"};
    cout<<X.title<<endl;
    cout<<X.str;
    Book Y[2]={{"java","rohan"},{"sd","xjv"}};
    cout<<Y[0].title<<endl;
    cout<<Y[1].title;
    cin>>K.d.date;
    cout<<K.d.date;

    return 0;
}

