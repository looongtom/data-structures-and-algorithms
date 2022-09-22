#include<bits/stdc++.h>
using namespace std;
int M=1e9+7,A[1005],N,K,F[1005];
int tinh(){
    memset(F,0,sizeof(F));
    F[0]=1;
    for(int i=1;i<=K;i++){
        for(int j=1;j<=N;j++) if(A[j]<=i) 
        F[i] = (F[i] + F[i - A[j]]) %M;
    }
    return F[K];
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>N>>K;
        for(int i=1;i<=N;i++) cin>>A[i];
        cout<<tinh()<<endl;
    }
}