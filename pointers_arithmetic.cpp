#include <iostream>
using namespace std;

int main(){
    int marks[5]={2,45,6,7,9};
    int* p=marks;

    cout<<"***POINTER ARITHMETIC"<<endl;

    cout<<"At marks[0]: "<<*p<<endl;
    cout<<"At marks[1]: "<<*(p+1)<<endl;
    cout<<"At marks[2]: "<<*(p+2)<<endl;
    cout<<"At marks[3]: "<<*(p+3)<<endl;

    cout<<p<<endl<<p+1<<endl<<p+2<<endl<<p+3<<endl;

    return 0;
}