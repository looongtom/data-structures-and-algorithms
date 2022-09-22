#include<bits/stdc++.h>
using namespace std;
vector<int>adj[1005];
bool chuaxet[1005];
int n,m;
void reset(){
     memset(chuaxet,true,sizeof(chuaxet));
}
void dfs(int u){
    chuaxet[u]=false;
    for(int i : adj[u]){
        if(chuaxet[i]) dfs(i);
    }
}
void dinhtru(){
    int ans=0;
    int counTPLT=0;
    reset();
    for(int i=1;i<=n;i++){
        if(chuaxet[i]){
            counTPLT++;
            dfs(i);
        }
    }

    for(int i=1;i<=n;i++){
        //loai bo dinh i khoi do thi
        reset();
        chuaxet[i]=false;
        int coun=0; //đếm sau khi loại bỏ dỉnh i
        for(int j=1;j<=n;j++){
            if(chuaxet[j]){
                coun++;
                dfs(j);
            }
        }
        if(coun>counTPLT){
            cout<<i<<" ";
        }
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
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        dinhtru();
        cout<<endl;
        for(int i=0;i<1005;i++) adj[i].clear();
    }
}
