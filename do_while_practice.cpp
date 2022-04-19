#include <iostream>
using namespace std;

int main()
{
    int one;
    int last;
    
    cout<<endl<<"DO-WHILE PRACTICE: "<<endl;
    
    cout<<endl<<"Enter initial number to be squared"<<endl;
    cin>>one;
    
    cout<<"Enter final number of the range: "<<endl;
    cin>>last;
    
    cout<<endl;

    do
    {
        cout<<(one*one)<<endl;
        one++;

    }while(one<=last);

    return 0;
}