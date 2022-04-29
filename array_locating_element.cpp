#include <iostream>
using namespace std;

int main()
{
    int total_elements;
    int to_find;
    
    cout<<"Enter the number of elements u would want in array"<<endl;
    cin>>total_elements;
    int elements[total_elements];

    for(int i=0;i<total_elements;i++)
    {
        cout<<"Enter element: "<<endl;
        cin>>elements[i];
    }

    cout<<"Array: "<<elements<<endl;
    cout<<elements[0]<<endl;


    cout<<"THE ARRAY IS:";
    for(int k=0;k<total_elements;k++){
        cout<<elements[k] <<" ";
    }

    cout<<endl<<"Which number do u want to find?"<<endl;
    cin>>to_find;
    for(int i=0;i<total_elements;i++){
        if (elements[i]==to_find)
        {
            cout<<"Element found at"<<i<<endl;
            break;
        }
        if (i==total_elements-1 ){
            cout<<"Element not found"<<endl;
        }
        
  
        }
        
    

    return 0;
}