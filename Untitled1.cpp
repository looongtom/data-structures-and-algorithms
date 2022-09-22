#include<bits/stdc++.h>
using namespace std;
void taotohop(vector<vector<int>>&c,vector<int>&tmp,int left,int n,int k,vector<int>&a){
    if(k==0){
        c.push_back(tmp);
        return;
    }
    for(int i=left;i<n;i++){
        tmp.push_back(a[i]);
        taotohop(c,tmp,i+1,n,k-1,a);
        tmp.pop_back();
    }
}
vector<vector<int>>tohop(int n,int k,vector<int>&a){
    vector<vector<int>>c;
    vector<int>tmp;
    taotohop(c,tmp,1,n,k,a);
    return c;
}
int main(){
    int n,k;
    cin>>n>>k;
    set<int>s;
    vector<int>a;
    for(int i=0;i<n;i++){
        int tmp;
        cin>>tmp;
        s.insert(tmp);
    }
    a.push_back(-1);
    for(auto x:s){
        a.push_back(x);
    }
    vector<vector<int>>c=tohop(a.size(),k,a);
    for(int i=0;i<c.size();i++){
        for(int j=0;j<c[i].size();j++) cout<<c[i][j]<<" ";
        cout<<endl;
    }
}
