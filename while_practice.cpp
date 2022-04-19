#include <iostream>
using namespace std;

int main(){
    int fact;
    cout<<endl<<"While LOOP PRACTICE (FACTORIAL)"<<endl;
    cout<<endl<<"Enter the number you want the factorial of:"<<endl;
    cin>>fact;
    int i=1;
    int fact_ans=1;
    while(i<=fact){
        if (fact ==0){
            fact_ans=1;
        }
        else{
            fact_ans=fact_ans*i;
            i++;
        }
        
    }
    cout<<endl<<"FACRORIAL IS "<<fact_ans<<endl;    

    
    return 0;

}