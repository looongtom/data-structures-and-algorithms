#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void Check(ll num,vector<int>&N){
    while(num>0){
        N[num%10]++;
        num/=10;
    }
}
int main(){
    int  t;
    cin>>t;
    while(t--){
        vector<int>N(10,0);
        int n;
        cin>>n;
        vector<ll>a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++){
            Check(a[i],N);
        }
        for(int i=0;i<=9;i++){
            if(N[i]!=0) cout<<i<<" ";
        }
        cout<<endl;
    }
}