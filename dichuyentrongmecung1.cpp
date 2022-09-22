#include<bits/stdc++.h>
using namespace std;
int n,a[12][12],check;
vector<string>r;
void Try(int i,int j,string s){
    if(i==0 && j==0 && a[i][j]==0){
        check=0;
        return;
    }
    if(i==n-1 && j==n-1 && a[n-1][n-1]==1){
        r.push_back(s);
        check=1;
        return;
    }
    if(i<n-1 && a[i+1][j]) Try(i+1,j,s+"D");
    if(j<n-1 && a[i][j+1]) Try(i,j+1,s+"R");
    //if(i<n-1 && j<n && a[i+1][j]!=1 && a[i][j+1]!=1 || i>=n || j>=n) return;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++) cin>>a[i][j];
        }
        check=0;
        Try(0,0,"");
        if(!check) cout<<"-1\n";
        else{
            sort(r.begin(),r.end());
            for(int i=0;i<r.size();i++) cout<<r[i]<<" ";
        }
        cout<<endl;
        r.clear();
    }
}