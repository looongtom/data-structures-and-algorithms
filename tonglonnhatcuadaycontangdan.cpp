#include<bits/stdc++.h>
using namespace std;
int qhd(int a[],int n){
    int F[1005],i,j,kq=0;
    for(i =0;i<n;i++){
        F[i]=a[i];
        for(j=0;j<i;j++){
            if(a[j]<a[i]) F[i] = max (F[i],F[j]+a[i]);
        }
        kq=max(kq,F[i]);
    }
    return kq;
}
int main(){
    int t,a[10005];
    cin>>t;
    while(t--){  
    int n;
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    cout<<qhd(a,n)<<endl;
    }
}