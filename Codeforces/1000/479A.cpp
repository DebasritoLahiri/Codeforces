#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#define lli long long int
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int res;
    if(b==1){
        int temp;
        res=a<c?a:c;
        temp=(a+c)-res;
        res=temp==1?(temp)+(res+1):(temp)*(res+1);
    }
    else{
        res=b;
        if(a==1 && c==1){res+=a+c;}
        else if(a==1){res=(res+a)*c;}
        else if(c==1){res=(res+c)*a;}
        else{res=res*a*c;}
    }
    cout<<res;
    return 0;
}