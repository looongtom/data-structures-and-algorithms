#include<bits/stdc++.h>
using namespace std;
int C[20][20],A[20],B[20]={0},n,fopt=INT_MAX,cmin=INT_MAX,cost=0;
void quaylui(int i){
    int j;
    for(j=2;j<=n;j++){
        if(!B[j]){
            A[i]=j;
            B[j]=1;
            cost = cost +C[A[i-1]][A[i]];
            if(i==n){
                int v = cost +C[A[n]][A[1]];
                fopt=min(fopt,v);
            }
            else if(cost+cmin*(n-i+1) < fopt){
                quaylui(i+1);
            }
            cost = cost - C[A[i-1]][A[i]];
            B[j]=0;
        }
    }
}
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){ 
            cin>>C[i][j];
            if(i!=j) cmin=min(cmin,C[i][j]);
        }
    }
    A[1]=1;
    quaylui(2);
    cout<<fopt;
}