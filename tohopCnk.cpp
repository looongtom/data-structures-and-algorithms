#include<bits/stdc++.h>
using namespace std;
int C[1005][1005];
int r=1e9+7;
void tinh(){
    int i,j;
    for(int i=0;i<=1000;i++){
        for(int j=0;j<=i;j++){
            if(j==0 || j==i) C[i][j]=1;
            else C[i][j]=( C[i-1][j] + C[i-1][j-1])%r;
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        tinh();
        cout<<C[n][k]<<endl;
    }
} 