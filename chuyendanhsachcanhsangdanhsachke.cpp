#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<vector<int>>a(m);
        for(int i=1;i<=m;i++){
            int u,v;
            cin>>u>>v;
            a[u].push_back(v);
            a[v].push_back(u);
        }
        for(int i=1;i<=n;i++){
            cout<<i<<": ";
            for(int j=0;j<a[i].size();j++) cout<<a[i][j]<<" ";
            cout<<endl;
        }
    }
}