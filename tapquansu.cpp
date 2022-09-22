#include<bits/stdc++.h>
using namespace std;
void taotohop(vector<vector<int>>&r,vector<int>&tmp,int left,int n,int k){
    if(k==0){
        r.push_back(tmp);
        return;
    }
    for(int i=left;i<=n;i++){
        tmp.push_back(i);
        taotohop(r,tmp,i+1,n,k-1);
        tmp.pop_back();
    }
}
vector<vector<int>>tohop(int n,int k){
    vector<vector<int>>r;
    vector<int>tmp;
    taotohop(r,tmp,1,n,k);
    return r;
}
int check(vector<int>&c,vector<int>&a,int k){
    for(int i=0;i<k;i++){
        if(c[i]!=a[i]) return 0;
    }
    return 1;
}
int findDif(vector<int>&c,vector<int>&a,int k){
    int coun=0;
    for(int i=0;i<k;i++){
        for(int j=i;j<k;j++){
            if(c[j]==a[i]) coun++;
        }
    }
    return k-coun;
}
// 1 4 5
// 2 3 4
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<vector<int>>c=tohop(n,k);
        vector<int>a(k);
        for(int i=0;i<k;i++) cin>>a[i];
      /*  for(int i=0;i<c.size();i++){
            if(check(c[i],a,k)){ 
                cout<<findDif(c[i+1],a,k)<<endl;
                break;
            }
        }*/
       for(int i=0;i<c.size();i++){
            if(check(c[i],a,k) && i!=c.size()-1){ 
                // for(int j=0;j<c[i].size();j++) cout<<c[i][j]<<" ";
                // cout<<endl;
                cout<<findDif(c[i+1],a,k)<<endl;
                break;
            }
            else if(check(c[i],a,k) && i==c.size()-1) cout<<k<<endl;
        }
    }
}