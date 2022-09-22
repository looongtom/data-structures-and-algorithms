#include<bits/stdc++.h>
using namespace std;
int findPair(vector<int>&a,int n,int k){
    int coun=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]+a[j]==k) coun++;
        }
    }
    return coun;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        cout<<findPair(a,n,k)<<endl;
     //  for(int i=0;i<n;i++) cout<<a[i];
    }
}