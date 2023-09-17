#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int m,n;
    int res=0;
    cin>>m>>n;
    res=n/2;
    res*=m;
    res+=((n%2)*m)/2;
    cout<<res;
    return 0;
}