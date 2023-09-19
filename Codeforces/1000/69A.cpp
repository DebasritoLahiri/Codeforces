#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#define lli long long int
using namespace std;
int main()
{
    int testCnt,x=0,xIn,y=0,yIn,z=0,zIn;
    cin>>testCnt;
    for(int i=0;i<testCnt;i++){
        cin>>xIn>>yIn>>zIn;
        x+=xIn;y+=yIn;z+=zIn;
    }
    if(x==0 && y==0 && z==0){cout<<"YES";}
    else{cout<<"NO";}
    return 0;
}