#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int x,y=-1;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>x;
            if(x==1){x=i,y=j;break;}
        }
        if(y!=-1){break;}
    }
    x=abs(x-2);
    y=abs(y-2);
    cout<<x+y;
    return 0;
}