#include<bits/stdc++.h>
using namespace std;
char quaylui(string s,long long n){
    long long x=s.size();
    if(n<x) return s[n];
    while(2*x <= n) x= x*2;
    if(x==n) return quaylui(s,n-1);
    return quaylui(s,n-x-1);
}
// COW => COW WCO => COWWCO OCOWWC
int main(){
    int t;
    cin>>t;
    while(t--){
        string s; long long n;
        cin>>s>>n;
        cout<<quaylui(s,n-1)<<endl;
    }
}