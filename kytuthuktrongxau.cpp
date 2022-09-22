#include<bits/stdc++.h>
using namespace std;
char Caculate(int n,long long k){
    long long x= pow(2,n-1);
    if(k==x) return 'A' +(n-1);
    if(k<x) return Caculate(n-1,k);
    return Caculate(n-1,k-x);
}
int main(){
    int t,n; long long k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        cout<<Caculate(n,k)<<endl;
    }
}