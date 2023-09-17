#include<iostream>
#include<vector>
using namespace std;
int main()
{
    string c="";
    int res=1;
    cin>>c;
    for(int i=1;i<c.length();i++){
        if(c[i]==c[i-1]){res+=1;}
        else{res=1;}
        if(res>6){cout<<"YES";return 0;}
        else{continue;}
    }
    if(res>6){cout<<"YES";return 0;}
    cout<<"NO";
    return 0;
}