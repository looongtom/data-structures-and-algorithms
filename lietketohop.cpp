#include<bits/stdc++.h>
using namespace std;
// 1 2 3 4 5
void taotohop(vector<vector<int>>&c,vector<int>&tmp,int left,int n,int k,vector<int>&a){
    if(k==0){ 
        c.push_back(tmp);
        return;
    }
    for(int i=left;i<n;i++){
        tmp.push_back(a[i]);
        taotohop(c,tmp,i+1, n, k-1,a);
        tmp.pop_back();
    }
}
vector<vector<int>> tohop(int n,int k,vector<int>&a){
    vector<vector<int>>c;
    vector<int>tmp;
    taotohop(c,tmp,1,n,k,a);
    return c;
}
int  main(){
    int n,k;
    cin>>n>>k;
    set<int>num;
    vector<int>a;
    for(int i=0;i<n;i++){
        int tmp;
        cin>>tmp;
        num.insert(tmp);
    }
    a.push_back(-1);
    for(auto x:num){
        a.push_back(x);
    }
    vector<vector<int>>c=tohop(a.size(),k,a);
    for(int i=0;i<c.size();i++){
      for(int j=0;j<c[i].size();j++) cout<<c[i][j]<<" ";
      cout<<endl;
    }
}   