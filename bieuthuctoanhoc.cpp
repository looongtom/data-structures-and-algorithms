#include<bits/stdc++.h>
using namespace std;
int OK=0,num[6],B[6];
void quaylui(int i,int s){
    if(OK) return;
    if(s==23 && i==5){
        OK=1;
        return;
    }
    for(int j=0;j<5;j++){
        if(!B[j]){
            B[j]=1;
            quaylui(i+1,s+num[j]);
            quaylui(i+1,s*num[j]);
            quaylui(i+1,s-num[j]);
            B[j]=0;
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        for(int i=0;i<5;i++) cin>>num[i];
        OK=0;
        for(int i=0;i<5;i++){
            B[i]=1;
            quaylui(1,num[i]);
            B[i]=0;
        }
        OK==1?cout<<"YES\n":cout<<"NO\n";
    }
}