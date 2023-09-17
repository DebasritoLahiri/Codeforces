#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    int state;
    cin>>state;
    if(state>=0){cout<<state;}
    else if(state>=-9){cout<<0;}
    else{
        string stateInit,stateA,stateB;
        stateInit=to_string(state);
        int len=stateInit.length();
        stateA=stateB=stateInit.substr(0,len-2);
        stateA+=stateInit[len-1];
        stateB+=stateInit[len-2];
        cout<<max(stoi(stateA),stoi(stateB));
    }
    return 0;
}