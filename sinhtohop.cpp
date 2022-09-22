#include<bits/stdc++.h>
using namespace std;
void taotohop(vector<vector<int>>&c,vector<int>&tmp,int left,int n,int k){
    if(k==0){ 
        c.push_back(tmp);
        return;
    }
    for(int i=left;i<=n;i++){
        tmp.push_back(i);
        taotohop(c,tmp,i+1, n, k-1);
        tmp.pop_back();
    }
}
vector<vector<int>> tohop(int n,int k){
    vector<vector<int>>c;
    vector<int>tmp;
    taotohop(c,tmp,1,n,k);
    return c;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<vector<int>> c=tohop(n,k);
        for(int i=0;i<c.size();i++){
            for(int j=0;j<c[i].size();j++) cout<<c[i][j];
            cout<<" ";
        }
        cout<<endl;
    }
}