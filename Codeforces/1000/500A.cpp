#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<map>
#define lli long long int
using namespace std;
int main()
{
    lli n,t,curr=1,temp;
    cin>>n>>t;
    vector<int> portals;
    portals.push_back(-1);
    for(int i=0;i<n-1;i++){
        cin>>temp;
        portals.push_back(temp);
    }
    while(true){
        if(curr==t){cout<<"YES";return 0;}
        else if(curr>=n || portals[curr]==-1){cout<<"NO";return 0;}
        else{temp=curr+portals[curr];portals[curr]=-1;curr=temp;}
    }
    return -1;
}