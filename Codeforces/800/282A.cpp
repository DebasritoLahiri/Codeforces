#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int lines;
    string in;
    int res=0;
    cin>>lines;
    for(int i=0;i<lines;i++){
        cin>>in;
        if(in[0]=='+' || in[2]=='+'){res+=1;}
        else{res-=1;}
    }
    cout<<res;
    return 0;
}