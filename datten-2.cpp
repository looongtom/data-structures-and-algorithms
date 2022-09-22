#include<bits/stdc++.h>
using namespace std;
void taotohop(vector<vector<char>>&c,vector<char>&tmp,int left,int n,int k){
    if(k==0){ 
        c.push_back(tmp);
        return;
    }
    for(int i=left;i<=n;i++){
        char ctmp=i+64;
        tmp.push_back(ctmp);
        taotohop(c,tmp,i+1, n, k-1);
        tmp.pop_back();
    }
}
vector<vector<char>> tohop(int n,int k){
    vector<vector<char>>c;
    vector<char>tmp;
    taotohop(c,tmp,1,n,k);
    return c;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<vector<char>> c=tohop(n,k);
        for(int i=0;i<c.size();i++){
            for(int j=0;j<c[i].size();j++) cout<<c[i][j];
            cout<<endl;
        }
        //cout<<endl;
    }
}