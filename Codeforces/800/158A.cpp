#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int input,prev=INT_MAX;
    int parc,k;
    cin>>parc>>k;
    int res=0;
    for(int i=0;i<parc;i++){
        cin>>input;
        if((k>0 || input==prev) && input>0){res+=1;prev=input;k-=1;}
    }
    cout<<res;
    return 0;
}