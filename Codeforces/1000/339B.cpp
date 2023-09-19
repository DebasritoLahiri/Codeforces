#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<map>
#define lli long long int
using namespace std;
int main()
{
    lli n,m;
    cin>>n>>m;
    lli curr=1,next,time=0;
    for(int i=0;i<m;i++){
        cin>>next;
        if(next<curr){time+=n-curr+1;curr=1;time+=next-curr;curr=next;}
        else{time+=next-curr;curr=next;}
    }
    cout<<time;
    return 0;
}