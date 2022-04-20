#include <iostream>
using namespace std;

int main()
{
    int k=0;
    int l=0;
    int marks[7]={98,97,56,78,90,45,45};

    cout<<endl<<"******ARRAYS******"<<endl;
    
    //****using for loop*****
    
    cout<<"Printing array using a for-Loop"<<endl;
    for (int i = 0; i < 7; i++)
    {
        cout<<"The marks are: "<<marks[i]<<endl;
        
    }

    //****using while loop****    
    cout<<endl<<"Printing array using a While-loop"<<endl;
    while (k<7)
    {
        cout<<"The marks:"<<marks[k]<<endl;
        k++;
    }
    
    //*****Do while loop******
    cout<<endl<<"By Do While"<<endl;
    do{
        cout<<"The marks are : "<<marks[l]<<endl;
        l++;
    }while(l<7);

    return 0;

}