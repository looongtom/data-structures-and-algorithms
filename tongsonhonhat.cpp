#include<bits/stdc++.h>
using namespace std;
long long minSum(vector<int>&s,int n){
    long long a=0,b=0;
    for(int i=0;i<n;i++){
        if(i%2==0) a=s[i]+a*10;
        else b=s[i]+b*10;
    }
    return a+b;
}
// 2 3 4 5 6 8
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>s(n);
        for(int i=0;i<n;i++) cin>>s[i];
        sort(s.begin(),s.end());
        cout<<minSum(s,n)<<endl;
    }
}