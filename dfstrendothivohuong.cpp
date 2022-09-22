#include<bits/stdc++.h>
using namespace std;
#define MAX 1005
int n,m,u;
int chuaxet[MAX];
vector<vector<int>>A(MAX);
void DFS(int u){
    chuaxet[u]=0;
    cout<<u<<" ";
    for(int i=0;i<A[u].size();i++){
        int v=A[u][i];
        if(chuaxet[v]) DFS(v);
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        memset(chuaxet,1,sizeof(chuaxet));
        for(int i=0;i<MAX;i++) A[i].clear();
        cin>>n>>m>>u;
        for(int i=1;i<=m;i++){
            int a,b;
            cin>>a>>b;
            A[a].push_back(b);
            A[b].push_back(a);
        }
        DFS(u);
        cout<<endl;
    }
}