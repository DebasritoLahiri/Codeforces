#include<iostream>
#include<vector>
using namespace std;
int solve(vector<int> input){
    if(input[0]+input[1]+input[2]>1){return 1;}
    else{return 0;}
}
int main()
{
    vector<int> input;
    int testCnt,temp,res=0;
    cin>>testCnt;
    for(int i=0;i<testCnt;i++){
        for(int j=0;j<3;j++){
            cin>>temp;
            input.push_back(temp);
        }
        res+=solve(input);
        input.clear();
    }
    cout<<res;
    return 0;
}