#include<bits/stdc++.h>
using namespace std;
void printTriangle(vector<int>&a,int n){
    if(n<1) return;
    vector<int> tmp(n-1);
    for(int i=0;i<n-1;i++){
        int x=a[i]+a[i+1];
        tmp[i]=x;
    }
    printTriangle(tmp,n-1);
    cout<<'[';
    for(int i=0;i<n;i++){
        cout<<a[i];
        if(i<n-1) cout<<" ";
    }
    cout<<"] ";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        printTriangle(a,n);
        cout<<endl;
    }
}