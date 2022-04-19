#include <iostream>
using namespace std;

int main()
{
    int tbno;
    int tb_iniialize=1;
    int trange;

    cout<<endl<<"Practicing for loops(generating a table)"<<endl;
    cout<<endl;

    cout<<"Enter the table number:"<<endl;
    cin>>tbno;

    cout<<"Enter range:"<<endl;
    cin>>trange;

    cout<<endl<<"TABLE of "<<tbno<<":"<<endl<<endl;

    for(tb_iniialize;tb_iniialize<=trange;tb_iniialize++)
    {
        cout<<tb_iniialize*tbno<<endl;
    }

    return 0;
}