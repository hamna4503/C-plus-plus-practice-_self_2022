#include <iostream>
using namespace std;

int main(){
    int total_elements;
    int elements[total_elements]={};
    
    cout<<"Enter the number of elements u would want in array"<<endl;
    cin>>total_elements;
    
    for(int i=0;i!=total_elements;i++){
        cout<<"Enter "<<i+1<<"element: "<<endl;
        cin>>elements[i];
    }

    cout<<"Array: "<<total_elements<<endl;


    return 0;
}