#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        int len=n+m;
        int a[len];
        for(int i=0;i<len;i++) cin>>a[i];
        sort(a,a+len);
        cout<<a[k-1]<<endl;
  //   for(int i=0;i<len;i++) cout<<a[i]<<" ";
  //   cout<<endl;
    }
}