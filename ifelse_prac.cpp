

#include <iostream>
using namespace std;

int main()
{
    int marks;
    cout<<"IF-ELSE PRACTICE DATE: 18-4-2022"<<endl;
    cout<<"ENter your marks please: "<<endl;
    cin>>marks;
    if (marks>90)
    {
        cout<<"A plus grade";        
    }
    else if ((marks >50)&&(marks<90))
    {
        cout<<"Average marks"<<endl;
    }
    else
    {
        cout<<"You have failed."<<endl;
    }

    return 0;
}