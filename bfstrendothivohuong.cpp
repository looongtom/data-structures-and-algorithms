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
void BFS(int u){
    queue<int>q;
    q.push(u);
    chuaxet[u]=0;
    cout<<u<<" ";
    while(!q.empty()){
        int x=q.front();
        q.pop();
        for(int v=0;v<A[x].size();v++){
            int y=A[x][v];
            if(chuaxet[y]){
                q.push(y);
                chuaxet[y]=0;
                cout<<y<<" ";
            }
        }
    }
    cout<<endl;
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
        BFS(u);
        cout<<endl;
    }
}