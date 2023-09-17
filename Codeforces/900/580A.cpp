#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int curr=INT_MAX,in,len=0,totLen,maxLen=0;
    cin>>totLen;
    for(int i=0;i<totLen;i++){
        cin>>in;
        if(in<curr){
            if(len>maxLen){maxLen=len;}
            len=1;
            curr=in;
        }
        else{len+=1;curr=in;}
    }
    if(len>maxLen){maxLen=len;}
    cout<<maxLen;
    return 0;
}