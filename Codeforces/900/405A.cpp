#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int cols,temp;
    cin>>cols;
    vector<int> tempVec(cols,0);
    vector<vector<int>> box(100,tempVec);
    for(int i=0;i<cols;i++){
        cin>>temp;
        for(int j=0;j<temp;j++){box[99-j][i]=1;}
    }
    int k;
    for(int i=0;i<100;i++){
        k=0;
        for(int j=0;j<cols;j++){
            if(box[i][j]==1){tempVec[cols-1-k]+=1;k+=1;}
        }
    }
    for(int i=0;i<cols;i++){
        cout<<tempVec[i]<<" ";
    }
    return 0;
}