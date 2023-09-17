#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int cnt=0;
    vector<int> coins;
    int sum=0;
    int res=0;
    cin>>cnt;
    for(int i=0;i<cnt;i++){
        cin>>res;
        coins.push_back(res);
        sum+=res;
    }
    res=0;
    cnt=0;
    sort(coins.begin(),coins.end(),greater<int>());
    while(res<=sum/2){
        res+=coins[cnt];
        cnt+=1;
    }
    cout<<cnt;
    return 0;
}