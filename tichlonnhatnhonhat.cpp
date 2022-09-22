#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool cus(int a,int b){
    if(a<b)return 0;
    return 1;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<ll>a(n);  vector<ll>b(m);
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<m;i++) cin>>b[i];
        sort(a.begin(),a.end(),cus);
        sort(b.begin(),b.end());
        cout<<a[0]*b[0]<<endl;
    }
}