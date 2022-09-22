#include<bits/stdc++.h> 
using namespace std;
int r= 1e9+7;
long long Luythua(int n,int k){
        if(k==0) return 1;
        long long x = Luythua(n,k/2);
        if(k%2==0) return x*x%r;
        return n*(x*x%r )%r;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        cout<<Luythua(n,k)<<endl;
    }
}