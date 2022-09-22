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
int check(vector<int>a,int s){
    int sum=0;
    for(int i=0;i<a.size();i++){
        sum+=a[i];
    }
    if(sum!=s) return 0;
    return 1;
}
int main(){
    int n,k,s;
    n=k=s=-1;
    while(n!=0 && k!=0 &&s!=0){
        int coun=0;
        cin>>n>>k>>s;
        if(n==0 && k==0 &&s==0) break;
        vector<vector<int>>c=tohop(n,k);
        for(int i=0;i<c.size();i++){
            if(check(c[i],s)) coun++;
        }
        cout<<coun<<endl;
    }
}