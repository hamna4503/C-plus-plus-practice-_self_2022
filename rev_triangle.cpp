#include <iostream>
using namespace std;

int main(){
    int range;
    cout<<endl<<"******REVERSE TRIANGLE*****"<<endl;
    cout<<"Enter range:"<<endl;
    cin>>range;
    for(range;range!=0;range--){
        for(int j=1;j<=range;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}