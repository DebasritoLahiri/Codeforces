#include<iostream>
#include<vector>
using namespace std;
void solve(string input){
    if(input.length()<=10){cout<<input<<endl;}
    else{
        cout<<input[0];
        cout<<(input.length()-2);
        cout<<input[input.length()-1];
        cout<<endl;
    }
    return;
}
int main()
{
    string input;
    int testCnt;
    cin>>testCnt;
    for(int i=0;i<testCnt;i++){
        cin>>input;
        solve(input);
    }
    return 0;
}