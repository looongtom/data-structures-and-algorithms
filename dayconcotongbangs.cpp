#include<bits/stdc++.h>
using namespace std;
int F[40005],A[205],n,s;
int kiemtra(){
    int i,j;
    memset(F,0,sizeof(F));
    F[0]=1;
    for(i=1;i<=n;i++){
        for(j=s;j>=A[i];j--){
            if(F[j]==0 && F[j-A[i]]==1) F[j]=1;
        }
    }
    return F[s];
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n>>s;
        for(int i=1;i<=n;i++)cin>>A[i];
        if(kiemtra()) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}