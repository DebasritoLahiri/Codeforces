#include<iostream>
#include <stdio.h>
#include<vector>
#include<algorithm>
#include<string>
#include<ctype.h>
using namespace std;
int main()
{
    string input="";
    string res="";
    cin>>input;
    transform(input.begin(), input.end(), input.begin(), ::tolower);
    int len=input.length();
    for(int i=0;i<len;i++){
        if(input[i]=='a' || input[i]=='e' || input[i]=='i' || input[i]=='o' || input[i]=='u' || input[i]=='y'){continue;}
        else{res+='.';res+=input[i];}
    }
    cout<<res;
    return 0;
}