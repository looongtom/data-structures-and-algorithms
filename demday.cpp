#include<bits/stdc++.h> 
using namespace std;
int r= 123456789;
long long Luythua(int n,long long k){
        if(k==0) return 1;
        long long x = Luythua(n,k/2);
        if(k%2==0) return x*x%r;
        return n*(x*x%r )%r;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n;
        cout<<Luythua(2,n-1)<<endl;
    }
}