#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#define lli long long int
using namespace std;
int main()
{
    string in;
    vector<char> word={'h','e','l','l','o'};
    cin>>in;
    int i=0;
    while(!word.empty() && i<in.length()){
        if(in[i]==word[0]){word.erase(word.begin());}
        i+=1;
    }
    if(word.empty()){cout<<"YES";}
    else{cout<<"NO";}
    return 0;
}