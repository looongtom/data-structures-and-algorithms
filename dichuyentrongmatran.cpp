#include<bits/stdc++.h>
using namespace std;
int n,m,a[1001][1001],coun;
void Try(int i,int j){
    if(i==n-1 && j==m-1){
        coun++;
        return;
    }
    if(i<n) Try(i+1,j);
    if(j<m) Try(i,j+1);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        coun=0;
        cin>>n>>m;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++) cin>>a[i][j];
        }
        Try(0,0);
        cout<<coun<<endl;
    }
}