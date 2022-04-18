#include <iostream>
using namespace std;

int main(){
    int age;
    cout<<"This is the second practice"<<endl;
    cout<<"Please enter your age"<<endl;
    cin>>age;
    if ((age>=18)&&(age<60)){
        cout<<"Your are elligibe for license"<<endl;
    }
    else if (age>60){
        cout<<"you are too old"<<endl;

    }
    else{
    cout<<"you are underage"<<endl;
    }
    return 0;
}