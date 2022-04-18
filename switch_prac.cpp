#include <iostream>
using namespace std;

int main(){
    int age;
    cout<<"Practicig switch case "<<endl;
    cout<<"Enter age please:"<<endl;
    cin>>age;
    switch (age)
    {
    case 22:
        cout<<"You are 22 years old";
        break;
    case 44:
        cout<<"You are 44";
        break;
    default:
    cout<<"WHo knows";
    break;
    }
    return 0;
}