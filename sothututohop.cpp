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
int check(vector<int>&a,vector<int>&b,int k){
    for(int i=0;i<k;i++){
        if(a[i]!=b[i]) return 0;
    }
    return 1;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>a(k);
        for(int i=0;i<k;i++) cin>>a[i];
        vector<vector<int>> c=tohop(n,k);
        for(int i=0;i<c.size();i++){
            if(check(a,c[i],k)){
                cout<<i+1<<endl;
                break;
            }
            
        }
    }
}
// 1 4 5
// 2 3 4