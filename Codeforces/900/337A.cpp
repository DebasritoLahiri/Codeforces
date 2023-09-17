#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n,m,temp;
    cin>>n>>m;
    vector<int> puzzles;
    for(int i=0;i<m;i++){
        cin>>temp;
        puzzles.push_back(temp);
    }
    sort(puzzles.begin(),puzzles.end());
    temp=INT_MAX;
    for(int i=0;i<m-n+1;i++){
        if(puzzles[i+n-1]-puzzles[i]<temp){temp=puzzles[i+n-1]-puzzles[i];}
    }
    cout<<temp;
    return 0;
}