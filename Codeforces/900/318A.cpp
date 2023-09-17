#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    long long int n,k,even,odd;
    cin>>n>>k;
    even=n/2;
    odd=n-even;
    long long int res;
    if(k<=odd){res=1+2*(k-1);}
    else{k=k-odd;res=2+2*(k-1);}
    cout<<res;
    return 0;
}