#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    long long int n,m,a,cnt=0;
    cin>>n>>m>>a;
    if(n<=a && m<=a){cout<<1;}
    else{
        cnt+=(n/a)*(m/a);
        long long int n_=0,m_=0;
        if(n>a){n_=n%a*m;}
        if(m>a){m_=m%a*n;}
        if(n_>0){cnt+=m/a;}
        if(m_>0){cnt+=n/a;}
        if(n_>0 && m_>0){cnt+=1;}
        cout<<cnt;
    }
    return 0;
}