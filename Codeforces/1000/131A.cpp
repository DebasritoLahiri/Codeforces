#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#define lli long long int
using namespace std;
int main()
{
    string word;
    cin>>word;
    string temp=word;
    int len=temp.length();
    temp[0]^=(1<<5);
    for(int i=1;i<len;i++){
        if(temp[i]>90){cout<<word;return 0;}
        else{temp[i]=tolower(temp[i]);}
    }
    cout<<temp;
    return 0;
}