//what are pointers?--> Datatype or type of variable holding another datatypes' address.

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // ********** VALUE TO ADDRESS**********
 
    int a=4;
    int* b=&a;
    int** c=&b;

    cout<<"THE ADDRESS OF a is : "<<setw(9)<<b<<endl;
    cout<<"THE ADDRESS OF a is :"<<setw(10)<<&a<<endl;

    //*********ADDRESS TO VALUE************

    cout<<"The Value of "<<b<<"is : "<<setw(5)<<*b<<endl;

    //**********ADDRESS OF POINTER (POINTER TO POINTER)*************

    cout<<"The address of "<<b<<" is :"<<&b<<endl;
    cout<<"The address of "<<b<<" is: "<<c<<endl;
    
    return 0;
}