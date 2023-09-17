#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    string in,res="";
    cin>>in;
    int len=in.length();
    int resLen=0;
    if(len<4){cout<<in;}
    else{
        for(int i=0;i<len;i++){
            if(in[i]=='W' && in[i+1]=='U' && in[i+2]=='B'){i+=2;if(resLen>0 && res[resLen-1]!=' '){res+=' ';resLen+=1;}}
            else{res+=in[i];resLen+=1;}
        }
        //if(in[len-3]=='W' && in[len-2]=='U' && in[len-1]=='B'){}
        //else{res+=in[len-3];res+=in[len-2];res+=in[len-1];}
    }
    cout<<res;
    return 0;
}