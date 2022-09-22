#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
int findDiff(vector<ull>&a,vector<ull>&b,int n){
    for(int i=0;i<n-1;i++){
        if(a[i]!=b[i]) return i+1;
    }
    return n-1;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<ull>a(n);
        vector<ull>b(n-1);
        for(int i=0;i<n;i++) cin>>a[i];
        for(int j=0;j<n-1;j++) cin>>b[j];
        sort(a.begin(),a.end()); sort(b.begin(),b.end());
        cout<<findDiff(a,b,n)<<endl;
    }
}