#include <iostream>
using namespace std;

int main(){
    int triangle_range;

    cout<<endl<<"*****Patterns:******"<<endl;

    cout<<"Enter range of triangle: "<<endl;
    cin>>triangle_range;

    for(int i=1;triangle_range>=i;i++)
    {
        for(int j=1;j<=i;j++){
            cout<<"*";
        

        }
        cout<<endl;

    }
    return 0;
}