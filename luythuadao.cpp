#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
const ull r=1e9+7;
ull reverse(ull n){
    ull k=0;
    while(n>0){
        k=k*10+ (n%10);
        n/=10;
    }
    return k;
}
ull Pow(ull n,ull k){
    if(k==1) return n%r;
    ull x= Pow(n,k/2);
    if(k%2==0) return x*x%r;
    return n*(x*x%r)%r;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        ull n;
        cin>>n;
        ull k=reverse(n);
       // if(n==0) cout<<0<<endl;
        cout<<Pow(n,k)<<endl;
        // cout<<k<<endl;
    }
    return 0;
}