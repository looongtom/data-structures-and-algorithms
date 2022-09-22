#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int M=1e9+7;
int main(){
    int t,n;
    ll a;
    cin>>t;
    while(t--){
        cin>>n;
        priority_queue<ll,vector<ll>,greater<ll>>q;
        for(int i=0;i<n;i++){
            cin>>a;
            q.push(a);
        }
        ll kq=0;
        while(q.size()>=2){
            ll x=q.top();
            q.pop();
            ll y=q.top();
            q.pop();
            ll tong = (x+y)%M;
            q.push(tong);
            kq=(kq+tong)%M;
        }
        cout<<kq<<endl;
    }
}