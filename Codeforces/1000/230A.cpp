#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<map>
#define lli long long int
using namespace std;
int main()
{
    int n,s,x,y;
    map<int,int> demons;
    cin>>s>>n;
    for(int i=0;i<n;i++){
        cin>>x>>y;
        demons[x]+=y;
    }
    for(auto i=demons.begin();i!=demons.end();i++){
        if(i->first>=s){cout<<"NO"; return 0;}
        else{s+=i->second;}
    }
    if(s>=0){cout<<"YES";}
    else{cout<<"NO";}
    return 0;
}