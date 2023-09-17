#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int cnt=min(n,m);
    if(cnt%2==0){cout<<"Malvika";}
    else{cout<<"Akshat";}
    return 0;
}