#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<map>
#define lli long long int
using namespace std;
int main()
{
    lli x,cnt=0;
    cin>>x;
    while(x>0){
        cnt+=x%2;
        x/=2;
    }
    cout<<cnt;
    return 0;
}