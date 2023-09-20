#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<map>
using namespace std;
int main()
{
    long long int n,temp,taxi=0;
    cin>>n;
    map<int,int,greater<int>> studs;
    for(int i=0;i<n;i++){
        cin>>temp;
        studs[temp]+=1;
    }
    auto itr=studs.begin();
    while(itr!=studs.end()){
        if(itr->first==4){taxi+=itr->second;itr->second=0;itr++;}
        else if(itr->first==3){
            if(studs[1]>0){
                if(studs[1]>itr->second){taxi+=itr->second;studs[1]-=itr->second;itr->second=0;itr++;}
                else{taxi+=itr->second;studs[1]=0;itr->second=0;itr++;}
            }
            else{taxi+=itr->second;itr->second=0;itr++;}
        }
        else if(itr->first==2){
            if(itr->second%2==0){taxi+=itr->second/2;itr->second=0;itr++;}
            else{
                taxi+=itr->second/2+1;
                if(studs[1]>0){studs[1]=((studs[1]-2)>=0)?(studs[1]-2):(studs[1]-1);}
                itr->second=0;
                itr++;
            }
        }
        else if(itr->first==1){
            taxi+=itr->second/4;
            taxi+=(itr->second%4>0)?1:0;
            itr->second=0;
            itr++;
        }
        else{cout<<"Error: "<<itr->first<<" "<<itr->second<<endl;itr++;}
    }
    cout<<taxi;
    return 0;
}