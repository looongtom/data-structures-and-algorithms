#include<bits/stdc++.h>
using namespace std;
string binarySearch(vector<int>&a,int n,int k,int l,int r){
    string result;
    if(r>=l){
        int mid = l+(r-l)/2;
        if(a[mid]==k) return to_string(mid+1);
        if(a[mid]>k)  return binarySearch(a,n,k,l,mid-1);
        return binarySearch(a,n,k,mid+1,r);
    }
    return "NO";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        cout<<binarySearch(a,n,k,0,n-1)<<endl;
    }
}
//  0 1 2 3 4 5