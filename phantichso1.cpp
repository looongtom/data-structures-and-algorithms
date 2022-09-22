#include<bits/stdc++.h>
using namespace std;
int n,a[16];
void Print(int n){
    cout<<'(';
    for(int i=1;i<=n;i++){
        cout<<a[i];
        if(i!=n) cout<<" ";
    }
    cout<<") ";

}
void Try(int i,int j,int cur){
    for(int k=j;k>=1;k--){
        if(cur+k<=n){
            a[i]=k;
            cur+=k;
            if(cur==n) Print(i);
            else Try(i+1,k,cur);
            cur-=k;
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        Try(1,n,0);
        cout<<endl;
    }
}