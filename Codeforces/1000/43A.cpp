#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<map>
#define lli long long int
using namespace std;
int main()
{
    lli cnt;
    string temp;
    map<string,int> scrBrd;
    cin>>cnt;
    for(int i=0;i<cnt;i++){
        cin>>temp;
        scrBrd[temp]+=1;
    }
    auto itr=scrBrd.begin();
    itr++;
    temp=(scrBrd.begin()->second)>(itr->second)?(scrBrd.begin()->first):(itr->first);
    cout<<temp;
    return 0;
}