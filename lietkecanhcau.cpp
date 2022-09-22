#include<bits/stdc++.h>
using namespace std;
#define MAX 1003
int n,m,A[MAX][MAX];
vector<int>ds[MAX];
vector<pair<int,int>>dscanh;
bool chuaxet[MAX];
void dfs(int u,int s,int t){
    chuaxet[u]=false;
    for(int v : ds[u]){
        if( (u ==s && v==t) || (u==t && v==s) ) continue;
        if(chuaxet[v]) dfs(v,s,t);
    }
}
void duyetcau(int n){
    for(auto it : dscanh){
        int x=it.first;
        int y=it.second;
        memset(chuaxet,true,sizeof(chuaxet));
        int coun=0;
        for(int i=1;i<=n;i++){
            if(chuaxet[i]){
                dfs(i,x,y);
                coun++;
            }
        }
        if(coun>1) cout<<x<<" "<<y<<" ";
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
            cin>>n>>m;
            for(int i=0;i<m;i++){
                int x,y;
                cin>>x>>y;
                ds[x].push_back(y);
                ds[y].push_back(x);
                dscanh.push_back( {x,y} );
            }
            duyetcau( n);
            for(int i=1;i<=n;i++) ds[i].clear();
            for(int i=1;i<=m;i++) dscanh.clear();
            cout<<endl;
        }
    }

