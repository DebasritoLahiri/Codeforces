#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#define lli long long int
using namespace std;
bool calculate(int in, string val){
    if(in%stoi(val)==0){return true;}
    else if(stoi(val)>in){return false;}
    else{return calculate(in, val+'4')||calculate(in, val+'7');}
}
int main()
{
    int in;
    cin>>in;
    if(calculate(in,"4")||calculate(in,"7")){cout<<"YES";}
    else{cout<<"NO";}
    return 0;
}