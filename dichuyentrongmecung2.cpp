#include<bits/stdc++.h>
using namespace std;
int n,m,a[12][12],check;
bool ok[12][12];
vector<string>r;
void Try(int i,int j,string s){
    if(i==0 &&j==0 &&!a[i][j]){
        check=0;
        return;
    }
    if(i==n-1 && j==n-1 && a[i][j] ){
        r.push_back(s);
        check=1;
        return;
    }
    if(i<n-1 && a[i+1][j] && !ok[i+1][j]){
        ok[i][j] =true;
        Try(i+1,j,s+"D");
        ok[i][j] =false;
    }
    if(j<n-1 && a[i][j+1] && !ok[i][j+1]){
        ok[i][j] =true;
        Try(i,j+1,s+"R");
        ok[i][j] =false;
    }
    if(i>0 && a[i-1][j] && !ok[i-1][j]){
        ok[i][j] =true;
        Try(i-1,j,s+"U");
        ok[i][j] =false;
    }
    if(j>0 && a[i][j-1] && !ok[i][j-1]){
        ok[i][j] =true;
        Try(i,j-1,s+"L");
        ok[i][j] =false;
    }
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