#include<bits/stdc++.h>
using namespace std;
int n,k;
struct P{
    int val,ind;
};
bool cus(P a,P b){
    int A,B;
    A=(a.val>=k)?a.val-k:k-a.val;
    B=(b.val>=k)?b.val-k:k-b.val;
    if(A>B) return 0;
    else if(A==B&&a.ind>b.ind) return 0;
    return 1;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n>>k;
        vector<P>a(n);
        for(int i=0;i<n;i++){ 
            cin>>a[i].val;
            a[i].ind=i;
        }
        sort(a.begin(),a.end(),cus);
        for(int i=0;i<n;i++) cout<<a[i].val<<" ";
        cout<<endl;
    }
}